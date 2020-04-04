################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/1.1.c \
../src/1.10.c \
../src/1.2.c \
../src/1.3.c \
../src/1.4.c \
../src/1.5.c \
../src/1.6.c \
../src/1.7.c \
../src/1.8.c \
../src/1.9.c 

OBJS += \
./src/1.1.o \
./src/1.10.o \
./src/1.2.o \
./src/1.3.o \
./src/1.4.o \
./src/1.5.o \
./src/1.6.o \
./src/1.7.o \
./src/1.8.o \
./src/1.9.o 

C_DEPS += \
./src/1.1.d \
./src/1.10.d \
./src/1.2.d \
./src/1.3.d \
./src/1.4.d \
./src/1.5.d \
./src/1.6.d \
./src/1.7.d \
./src/1.8.d \
./src/1.9.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


