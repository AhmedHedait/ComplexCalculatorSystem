#ifndef keypad_h
#define keypad_h
//#include "tm4c123gh6pm.h" 


#define GPIO_PORTE_DATA_R       (*((volatile unsigned long *)0x400243FC))
#define GPIO_PORTE_DIR_R        (*((volatile unsigned long *)0x40024400))
#define GPIO_PORTE_AFSEL_R      (*((volatile unsigned long *)0x40024420))
#define GPIO_PORTE_PDR_R        (*((volatile unsigned long *)0x40024514))
#define GPIO_PORTE_DEN_R        (*((volatile unsigned long *)0x4002451C))
#define GPIO_PORTE_CR_R         (*((volatile unsigned long *)0x40024524))
#define GPIO_PORTE_AMSEL_R      (*((volatile unsigned long *)0x40024528))
#define GPIO_PORTE_PCTL_R       (*((volatile unsigned long *)0x4002452C))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))

#define PE1 (*((volatile unsigned long *)0x40024008))
#define PE2 (*((volatile unsigned long *)0x40024010)) 
#define PE3 (*((volatile unsigned long *)0x40024020)) 
#define PE4 (*((volatile unsigned long *)0x40024040)) 

#define GPIO_PORTD_DATA_R       (*((volatile unsigned long *)0x400073FC))
#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x40007400))
#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x40007420))
#define GPIO_PORTD_PUR_R        (*((volatile unsigned long *)0x40007510))
#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4000751C))
#define GPIO_PORTD_LOCK_R       (*((volatile unsigned long *)0x40007520))
#define GPIO_PORTD_CR_R         (*((volatile unsigned long *)0x40007524))
#define GPIO_PORTD_AMSEL_R      (*((volatile unsigned long *)0x40007528))
#define GPIO_PORTD_PCTL_R       (*((volatile unsigned long *)0x4000752C))

#define PD0 (*((volatile unsigned long *)0x40007004))
#define PD1 (*((volatile unsigned long *)0x40007008))
#define PD2 (*((volatile unsigned long *)0x40007010)) 
#define PD3 (*((volatile unsigned long *)0x40007020)) 

#define SYSCTL_RCC2_R           (*((volatile unsigned long *)0x400FE070))
#define SYSCTL_RCC_R 						(*((volatile unsigned long *)0x400FE060))  
#define SYSCTL_RIS_R 						(*((volatile unsigned long *)0x400FE050)) // PLL init
#define NVIC_ST_CTRL_R 					(*((volatile unsigned long *)0xE000E010))
#define NVIC_ST_RELOAD_R 				(*((volatile unsigned long *)0xE000E014))
#define NVIC_ST_CURRENT_R 			(*((volatile unsigned long *)0xE000E018)) // SYStick init

// Function Prototypes
void Keypad_Init(void);
char Keypad_scan (void);
//void Delay(void);
//unsigned long Switch_Input(void);
void PLL_Init(void);
void SysTick_Init(void);
void SysTick_Wait(unsigned long delay); 

extern float samia;


#endif
