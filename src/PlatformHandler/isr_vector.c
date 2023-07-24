#ifndef __ISR_DEF__
#define __ISR_DEF__


#include "W7500x_it.h"

void Remap_NMI_Handler(void)            __attribute__((section (".remap")));
void Remap_HardFault_Handler(void)   	__attribute__((section (".remap")));
void Remap_SVC_Handler(void)  	 		__attribute__((section (".remap")));
void Remap_PendSV_Handler(void)   		__attribute__((section (".remap")));
void Remap_SysTick_Handler(void)   		__attribute__((section (".remap")));
void Remap_SSP0_Handler(void)   		__attribute__((section (".remap")));
void Remap_SSP1_Handler(void)   		__attribute__((section (".remap")));
void Remap_UART0_Handler(void)   		__attribute__((section (".remap")));
void Remap_UART1_Handler(void)   		__attribute__((section (".remap")));
void Remap_UART2_Handler(void)   		__attribute__((section (".remap")));
void Remap_I2C0_Handler(void)   		__attribute__((section (".remap")));
void Remap_I2C1_Handler(void)   		__attribute__((section (".remap")));
void Remap_PORT0_Handler(void)  		__attribute__((section (".remap")));
void Remap_PORT1_Handler(void)  		__attribute__((section (".remap")));
void Remap_PORT2_Handler(void)  		__attribute__((section (".remap")));
void Remap_PORT3_Handler(void)  		__attribute__((section (".remap")));
void Remap_DMA_Handler(void)   			__attribute__((section (".remap")));
void Remap_DUALTIMER0_Handler(void)   	__attribute__((section (".remap")));
void Remap_DUALTIMER1_Handler(void)   	__attribute__((section (".remap")));
void Remap_PWM0_Handler(void)   		__attribute__((section (".remap")));
void Remap_PWM1_Handler(void)   		__attribute__((section (".remap")));
void Remap_PWM2_Handler(void)   		__attribute__((section (".remap")));
void Remap_PWM3_Handler(void)   		__attribute__((section (".remap")));
void Remap_PWM4_Handler(void)   		__attribute__((section (".remap")));
void Remap_PWM5_Handler(void)   		__attribute__((section (".remap")));
void Remap_PWM6_Handler(void)   		__attribute__((section (".remap")));
void Remap_PWM7_Handler(void)   		__attribute__((section (".remap")));
void Remap_RTC_Handler(void)   			__attribute__((section (".remap")));
void Remap_ADC_Handler(void)   			__attribute__((section (".remap")));
void Remap_WZTOE_Handler(void)   		__attribute__((section (".remap")));
void Remap_EXTI_Handler(void)   		__attribute__((section (".remap")));

void Remap_NMI_Handler(void)
{
   NMI_Handler();   
}
void Remap_HardFault_Handler(void)
{
	HardFault_Handler();
}
void Remap_SVC_Handler(void)  
{
	SVC_Handler();  
}	 		   
void Remap_PendSV_Handler(void)   		 
{
	PendSV_Handler();   		 
}	 		   
void Remap_SysTick_Handler(void)   			
{
	SysTick_Handler();   			
}	 		   
void Remap_SSP0_Handler(void)   		                     
{
	SSP0_Handler();   		    
}	 		   
void Remap_SSP1_Handler(void)   		                     
{
	SSP1_Handler();   		                     
}	 		   
void Remap_UART0_Handler(void)   		
{
	UART0_Handler();   		
}	 		   
void Remap_UART1_Handler(void)   		                    
{
	UART1_Handler();   		
}	 		   
void Remap_UART2_Handler(void)   		                    
{
	UART2_Handler();   		
}	 		   
void Remap_I2C0_Handler(void)   		                    
{
	I2C0_Handler();   		
}	 		   
void Remap_I2C1_Handler(void)   		                    
{
	I2C1_Handler();   		
}	 		   
void Remap_PORT0_Handler(void)  		                    
{
	PORT0_Handler();  		
}	 		   
void Remap_PORT1_Handler(void)  		                    
{
	PORT1_Handler();  		
}	 		   
void Remap_PORT2_Handler(void)  		                    
{
	PORT2_Handler();  		
}	 		   
void Remap_PORT3_Handler(void)  		                    
{
	PORT3_Handler();  		
}	 		   
void Remap_DMA_Handler(void)   			                    
{
	DMA_Handler();   			
}	 		   
void Remap_DUALTIMER0_Handler(void)   	                    
{
	DUALTIMER0_Handler();   	
}	 		   
void Remap_DUALTIMER1_Handler(void)   	                    
{
	DUALTIMER1_Handler();   	
}	 		   
void Remap_PWM0_Handler(void)   		                    
{
	PWM0_Handler();   		
}	 		   
void Remap_PWM1_Handler(void)   		                    
{
	PWM1_Handler();  
}	 		   
void Remap_PWM2_Handler(void)   		                    
{
	PWM2_Handler();  
}	 		   
void Remap_PWM3_Handler(void)   		                    
{
	PWM3_Handler();  
}	 		   
void Remap_PWM4_Handler(void)   		                    
{
	PWM4_Handler();  
}	 		   
void Remap_PWM5_Handler(void)   		                    
{
	PWM5_Handler();  
}	 		   
void Remap_PWM6_Handler(void)   		                    
{
	PWM6_Handler();  
}	 		   
void Remap_PWM7_Handler(void)   		                    
{
	PWM7_Handler();  
}	 		   
void Remap_RTC_Handler(void)   			                    
{
	RTC_Handler();   
}	 		   
void Remap_ADC_Handler(void)   			                    
{
	ADC_Handler();  
}	 		   
void Remap_WZTOE_Handler(void)
{
	WZTOE_Handler();
}	 		      		                    
void Remap_EXTI_Handler(void)   		                    
{
	EXTI_Handler(); 
}	
#endif
