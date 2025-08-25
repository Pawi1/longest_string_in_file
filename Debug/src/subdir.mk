################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/main.c \
../src/strings_utils.c 

C_DEPS += \
./src/main.d \
./src/strings_utils.d 

OBJS += \
./src/main.o \
./src/strings_utils.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -I/run/host/usr/lib/gcc/aarch64-redhat-linux/15/include -I/run/host/usr/local/include -I/run/host/usr/include -I.././src/ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/main.d ./src/main.o ./src/strings_utils.d ./src/strings_utils.o

.PHONY: clean-src

