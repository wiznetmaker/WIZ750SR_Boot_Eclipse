################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/cortexm/_initialize_hardware.c \
../system/src/cortexm/_reset_hardware.c \
../system/src/cortexm/exception_handlers.c 

OBJS += \
./system/src/cortexm/_initialize_hardware.o \
./system/src/cortexm/_reset_hardware.o \
./system/src/cortexm/exception_handlers.o 

C_DEPS += \
./system/src/cortexm/_initialize_hardware.d \
./system/src/cortexm/_reset_hardware.d \
./system/src/cortexm/exception_handlers.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/cortexm/%.o: ../system/src/cortexm/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/W7500x" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\Callback" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\Configuration" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Ethernet" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Internet\DHCP" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Internet\DNS" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\MDIO" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\PlatformHandler" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\include" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


