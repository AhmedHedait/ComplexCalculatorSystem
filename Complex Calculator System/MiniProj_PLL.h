#ifndef MiniProj_PLL_h
#define MiniProj_PLL_h


void SysTick_Init(void);
void PLL_Init(void);
void SysTick_Wait(unsigned long delay);
void SysTick_Wait_us(unsigned int delay_us);
void SysTick_Wait_ms(unsigned int delay_ms);
void SysTick_Wait_ns(unsigned int delay_ns);
#endif
