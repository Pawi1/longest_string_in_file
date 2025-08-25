/*
 * string_utils.c
 *
 *  Created on: 25 Aug 2025
 *      Author: pawil
 */
#include "strings_utils.h"
#include <stdlib.h>
#include <stdio.h>
#define INITIAL_CAPACITY 64

char* readline(void){
	char *buf, *new_buf;
	int c;
	size_t i, capacity;
	buf = malloc(INITIAL_CAPACITY);
	if (!buf)
		return NULL;
	i = 0;
	capacity = INITIAL_CAPACITY;

	while((c = getc(stdin)) != '\n' && c != EOF){
		if(i >= capacity - 1){
			capacity *= 2;
			new_buf = realloc(buf, capacity);
			if (!new_buf){
				free(buf);
				return NULL;
			}
			buf = new_buf;
		}
		buf[i++] = (char)c;
	}
	if (i == 0 && c == EOF) {
		free(buf);
		return NULL;
	}
	new_buf = realloc(buf, i + 1);
	if (!new_buf){
		free(buf);
		return NULL;
	}
	buf = new_buf;
	buf[i] = '\0';
	return buf;
}

size_t str_len(const char* string){
	const char* first_index;
	if(string == NULL)
		return 0;
	first_index = string;
	for(;*string != '\0';string++);
	return string - first_index;
}
