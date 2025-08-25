/*
 * main.c
 *
 *  Created on: 25 Aug 2025
 *      Author: pawil
 */
#include <stdio.h>
#include <stdlib.h>
#include "strings_utils.h"

struct Longest_string_in_file {
    char* string;
    size_t lenght;
};

int main() {
    struct Longest_string_in_file lsif;
    char* line;
    lsif.string = NULL;
    lsif.lenght = 0;

    while ((line = readline()) != NULL) {
        if (lsif.string == NULL || str_len(line) > lsif.lenght) {
            free(lsif.string);
            lsif.string = line;
            lsif.lenght = str_len(line);
        } else {
            free(line);
        }
    }
    printf("\e[1;32mNajdłuższa linia w pliku to:\e[0m\n\n\e[40m%s\e[0m\n\n\e[1;32mJest dluga na \e[1;33m%zu\e[0m\e[1;32m znaków\e[0m\n", lsif.string,lsif.lenght);
    free(lsif.string);
    return 0;
}
