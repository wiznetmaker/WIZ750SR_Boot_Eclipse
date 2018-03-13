################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ioLibrary/Internet/httpServer/httpParser.c \
../src/ioLibrary/Internet/httpServer/httpServer.c \
../src/ioLibrary/Internet/httpServer/httpUtil.c 

OBJS += \
./src/ioLibrary/Internet/httpServer/httpParser.o \
./src/ioLibrary/Internet/httpServer/httpServer.o \
./src/ioLibrary/Internet/httpServer/httpUtil.o 

C_DEPS += \
./src/ioLibrary/Internet/httpServer/httpParser.d \
./src/ioLibrary/Internet/httpServer/httpServer.d \
./src/ioLibrary/Internet/httpServer/httpUtil.d 


# Each subdirectory must supply rules for building sources it contributes
src/ioLibrary/Internet/httpServer/%.o: ../src/ioLibrary/Internet/httpServer/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cross ARM C Compiler'
	arm-none-eabi-gcc -mcpu=cortex-m0 -mthumb -Og -fmessage-length=0 -fsigned-char -ffunction-sections -fdata-sections -Wall -Wextra  -g3 -DDEBUG -DTRACE -DOS_USE_TRACE_SEMIHOSTING_DEBUG -DUSE_STDPERIPH_DRIVER -DCORTEX_M0 -I"../include" -I"../system/include" -I"../system/include/cmsis" -I"../system/include/W7500x" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\Callback" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\Configuration" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Ethernet" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Internet\DHCP" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Internet\DNS" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\MDIO" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\PlatformHandler" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\include" -I"C:\Users\boomw\workspace\WIZ750SR_Boot\src\ioLibrary\Application\loopback" -std=gnu11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


