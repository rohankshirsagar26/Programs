################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/2.1.c \
../src/2.2.c \
../src/2.3.c \
../src/2.4.c \
../src/2.5.c \
../src/2.6.c \
../src/2.7.c \
../src/2.8.c \
../src/2s.1.c \
../src/2s.2.c \
../src/2s.3.c 

OBJS += \
./src/2.1.o \
./src/2.2.o \
./src/2.3.o \
./src/2.4.o \
./src/2.5.o \
./src/2.6.o \
./src/2.7.o \
./src/2.8.o \
./src/2s.1.o \
./src/2s.2.o \
./src/2s.3.o 

C_DEPS += \
./src/2.1.d \
./src/2.2.d \
./src/2.3.d \
./src/2.4.d \
./src/2.5.d \
./src/2.6.d \
./src/2.7.d \
./src/2.8.d \
./src/2s.1.d \
./src/2s.2.d \
./src/2s.3.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


