//
// This file is part of the GNU ARM Eclipse Plug-ins project.
// Copyright (c) 2014 Liviu Ionescu
//

// ----------------------------------------------------------------------------

#include "cortexm/ExceptionHandlers.h"

// ----------------------------------------------------------------------------

void __attribute__((weak))
Default_Handler(void);

// Forward declaration of the specific IRQ handlers. These are aliased
// to the Default_Handler, which is a 'forever' loop. When the application
// defines a handler (with the same name), this will automatically take
// precedence over these weak definitions
//
// TODO: Rename this and add the actual routines here.

//void __attribute__ ((weak, alias ("Default_Handler")))
//DeviceInterrupt_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_SSP0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_SSP1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_UART0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_UART1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_UART2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_I2C0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_I2C1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PORT0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PORT1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PORT2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PORT3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_DMA_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_DUALTIMER0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_DUALTIMER1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM0_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM1_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM2_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM3_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM4_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM5_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM6_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_PWM7_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_RTC_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_ADC_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_WZTOE_Handler(void);
void __attribute__ ((weak, alias ("Default_Handler")))
Remap_EXTI_Handler(void);

// ----------------------------------------------------------------------------

extern unsigned int _estack;

typedef void
(* const pHandler)(void);

// ----------------------------------------------------------------------------

// The vector table.
// This relies on the linker script to place at correct location in memory.

__attribute__ ((section(".isr_vector")))
pHandler __isr_vectors[] =
  { //
    (pHandler) &_estack,                          // The initial stack pointer
        Reset_Handler,                            // The reset handler

        Remap_NMI_Handler,                              // The NMI handler
		Remap_HardFault_Handler,                        // The hard fault handler

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
        MemManage_Handler,                        // The MPU fault handler
        BusFault_Handler,// The bus fault handler
        UsageFault_Handler,// The usage fault handler
#else
        0, 0, 0,				  // Reserved
#endif
        0,                                        // Reserved
        0,                                        // Reserved
        0,                                        // Reserved
        0,                                        // Reserved
		Remap_SVC_Handler,                              // SVCall handler
#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
        DebugMon_Handler,                         // Debug monitor handler
#else
        0,					  // Reserved
#endif
        0,                                        // Reserved
		Remap_PendSV_Handler,                           // The PendSV handler
		Remap_SysTick_Handler,                          // The SysTick handler

        // ----------------------------------------------------------------------
        // W7500x vectors
        //DeviceInterrupt_Handler,                  // Device specific
        // TODO: rename and add more vectors here
		Remap_SSP0_Handler,								// 16+ 0: SSP 0 Handler
		Remap_SSP1_Handler,								// 16+ 1: SSP 1 Handler
		Remap_UART0_Handler,								// 16+ 2: UART 0 Handler
		Remap_UART1_Handler,								// 16+ 3: UART 1 Handler
		Remap_UART2_Handler,								// 16+ 4: UART 2 Handler
		Remap_I2C0_Handler,								// 16+ 5: I2C 0 Handler
		Remap_I2C1_Handler,								// 16+ 6: I2C 1 Handler
		Remap_PORT0_Handler,								// 16+ 7: GPIO Port 0 Combined Handler
		Remap_PORT1_Handler,								// 16+ 8: GPIO Port 1 Combined Handler
		Remap_PORT2_Handler,								// 16+ 9: GPIO Port 2 Combined Handler
		Remap_PORT3_Handler,								// 16+10: GPIO Port 3 Combined Handler
		Remap_DMA_Handler,								// 16+11: DMA Combined Handler
		Remap_DUALTIMER0_Handler,							// 16+12: Dual timer 0 handler
		Remap_DUALTIMER1_Handler,							// 16+13: Dual timer 1 handler
		Remap_PWM0_Handler,								// 16+14: PWM0 Handler
		Remap_PWM1_Handler,								// 16+15: PWM1 Handler
		Remap_PWM2_Handler,								// 16+16: PWM2 Handler
		Remap_PWM3_Handler,								// 16+17: PWM3 Handler
		Remap_PWM4_Handler,								// 16+18: PWM4 Handler
		Remap_PWM5_Handler,								// 16+19: PWM5 Handler
		Remap_PWM6_Handler,								// 16+20: PWM6 Handler
		Remap_PWM7_Handler,								// 16+21: PWM7 Handler
		Remap_RTC_Handler,								// 16+22: RTC Handler
		Remap_ADC_Handler,								// 16+23: ADC Handler
		Remap_WZTOE_Handler,								// 16+24: WZTOE_Handler
		Remap_EXTI_Handler								// 16+25: EXTI_Handler
    };

// ----------------------------------------------------------------------------

// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.

void __attribute__ ((section(".after_vectors")))
Default_Handler(void)
{
  while (1)
    {
    }
}

// ----------------------------------------------------------------------------
