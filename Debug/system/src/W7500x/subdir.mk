################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../system/src/W7500x/W7500x_adc.c \
../system/src/W7500x/W7500x_crg.c \
../system/src/W7500x/W7500x_dma.c \
../system/src/W7500x/W7500x_dualtimer.c \
../system/src/W7500x/W7500x_exti.c \
../system/src/W7500x/W7500x_gpio.c \
../system/src/W7500x/W7500x_pwm.c \
../system/src/W7500x/W7500x_rng.c \
../system/src/W7500x/W7500x_ssp.c \
../system/src/W7500x/W7500x_uart.c \
../system/src/W7500x/W7500x_wdt.c \
../system/src/W7500x/W7500x_wztoe.c 

OBJS += \
./system/src/W7500x/W7500x_adc.o \
./system/src/W7500x/W7500x_crg.o \
./system/src/W7500x/W7500x_dma.o \
./system/src/W7500x/W7500x_dualtimer.o \
./system/src/W7500x/W7500x_exti.o \
./system/src/W7500x/W7500x_gpio.o \
./system/src/W7500x/W7500x_pwm.o \
./system/src/W7500x/W7500x_rng.o \
./system/src/W7500x/W7500x_ssp.o \
./system/src/W7500x/W7500x_uart.o \
./system/src/W7500x/W7500x_wdt.o \
./system/src/W7500x/W7500x_wztoe.o 

C_DEPS += \
./system/src/W7500x/W7500x_adc.d \
./system/src/W7500x/W7500x_crg.d \
./system/src/W7500x/W7500x_dma.d \
./system/src/W7500x/W7500x_dualtimer.d \
./system/src/W7500x/W7500x_exti.d \
./system/src/W7500x/W7500x_gpio.d \
./system/src/W7500x/W7500x_pwm.d \
./system/src/W7500x/W7500x_rng.d \
./system/src/W7500x/W7500x_ssp.d \
./system/src/W7500x/W7500x_uart.d \
./system/src/W7500x/W7500x_wdt.d \
./system/src/W7500x/W7500x_wztoe.d 


# Each subdirectory must supply rules for building sources it contributes
system/src/W7500x/%.o: ../system/src/W7500x/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -fno-move-loop-invariants -Wall -Wextra  -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/W7500x" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\Callback" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\Configuration" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Ethernet" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Internet\DHCP" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Internet\DNS" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\MDIO" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\PlatformHandler" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\include" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


