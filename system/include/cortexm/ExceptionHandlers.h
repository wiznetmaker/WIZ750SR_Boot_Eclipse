//
// This file is part of the µOS++ III distribution.
// Copyright (c) 2014 Liviu Ionescu.
//

#ifndef CORTEXM_EXCEPTION_HANDLERS_H_
#define CORTEXM_EXCEPTION_HANDLERS_H_

// ----------------------------------------------------------------------------

#if defined(__cplusplus)
extern "C"
  {
#endif

// External references to cortexm_handlers.c

extern void
Reset_Handler(void);
extern void
Remap_NMI_Handler(void);
extern void
Remap_HardFault_Handler(void);

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
extern void
MemManage_Handler(void);
extern void
BusFault_Handler(void);
extern void
UsageFault_Handler(void);
#endif

extern void
Remap_SVC_Handler(void);

#if defined(__ARM_ARCH_7M__) || defined(__ARM_ARCH_7EM__)
extern void
DebugMon_Handler(void);
#endif

extern void
Remap_PendSV_Handler(void);
extern void
Remap_SysTick_Handler(void);

#if defined(__cplusplus)
}
#endif

// ----------------------------------------------------------------------------

#endif // CORTEXM_EXCEPTION_HANDLERS_H_
