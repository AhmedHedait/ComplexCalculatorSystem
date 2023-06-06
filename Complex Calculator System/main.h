//#ifndef main_h
//#define main_h
////portA
//#define GPIO_PORTA_DATA_BITS_R  ((volatile unsigned long *)0x40004000)
//#define GPIO_PORTA_DATA_R       (*((volatile unsigned long *)0x400043FC))
//#define GPIO_PORTA_DIR_R        (*((volatile unsigned long *)0x40004400))
//#define GPIO_PORTA_IS_R         (*((volatile unsigned long *)0x40004404))
//#define GPIO_PORTA_IBE_R        (*((volatile unsigned long *)0x40004408))
//#define GPIO_PORTA_IEV_R        (*((volatile unsigned long *)0x4000440C))
//#define GPIO_PORTA_IM_R         (*((volatile unsigned long *)0x40004410))
//#define GPIO_PORTA_RIS_R        (*((volatile unsigned long *)0x40004414))
//#define GPIO_PORTA_MIS_R        (*((volatile unsigned long *)0x40004418))
//#define GPIO_PORTA_ICR_R        (*((volatile unsigned long *)0x4000441C))
//#define GPIO_PORTA_AFSEL_R      (*((volatile unsigned long *)0x40004420))
//#define GPIO_PORTA_DR2R_R       (*((volatile unsigned long *)0x40004500))
//#define GPIO_PORTA_DR4R_R       (*((volatile unsigned long *)0x40004504))
//#define GPIO_PORTA_DR8R_R       (*((volatile unsigned long *)0x40004508))
//#define GPIO_PORTA_ODR_R        (*((volatile unsigned long *)0x4000450C))
//#define GPIO_PORTA_PUR_R        (*((volatile unsigned long *)0x40004510))
//#define GPIO_PORTA_PDR_R        (*((volatile unsigned long *)0x40004514))
//#define GPIO_PORTA_SLR_R        (*((volatile unsigned long *)0x40004518))
//#define GPIO_PORTA_DEN_R        (*((volatile unsigned long *)0x4000451C))
//#define GPIO_PORTA_LOCK_R       (*((volatile unsigned long *)0x40004520))
//#define GPIO_PORTA_CR_R         (*((volatile unsigned long *)0x40004524))
//#define GPIO_PORTA_AMSEL_R      (*((volatile unsigned long *)0x40004528))
//#define GPIO_PORTA_PCTL_R       (*((volatile unsigned long *)0x4000452C))
//#define GPIO_PORTA_ADCCTL_R     (*((volatile unsigned long *)0x40004530))
//#define GPIO_PORTA_DMACTL_R     (*((volatile unsigned long *)0x40004534))

////*****************************************************************************
////
//// GPIO registers (PORTB)
////
////*****************************************************************************
//#define GPIO_PORTB_DATA_BITS_R  ((volatile unsigned long *)0x40005000)
//#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))
//#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
//#define GPIO_PORTB_IS_R         (*((volatile unsigned long *)0x40005404))
//#define GPIO_PORTB_IBE_R        (*((volatile unsigned long *)0x40005408))
//#define GPIO_PORTB_IEV_R        (*((volatile unsigned long *)0x4000540C))
//#define GPIO_PORTB_IM_R         (*((volatile unsigned long *)0x40005410))
//#define GPIO_PORTB_RIS_R        (*((volatile unsigned long *)0x40005414))
//#define GPIO_PORTB_MIS_R        (*((volatile unsigned long *)0x40005418))
//#define GPIO_PORTB_ICR_R        (*((volatile unsigned long *)0x4000541C))
//#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
//#define GPIO_PORTB_DR2R_R       (*((volatile unsigned long *)0x40005500))
//#define GPIO_PORTB_DR4R_R       (*((volatile unsigned long *)0x40005504))
//#define GPIO_PORTB_DR8R_R       (*((volatile unsigned long *)0x40005508))
//#define GPIO_PORTB_ODR_R        (*((volatile unsigned long *)0x4000550C))
//#define GPIO_PORTB_PUR_R        (*((volatile unsigned long *)0x40005510))
//#define GPIO_PORTB_PDR_R        (*((volatile unsigned long *)0x40005514))
//#define GPIO_PORTB_SLR_R        (*((volatile unsigned long *)0x40005518))
//#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))
//#define GPIO_PORTB_LOCK_R       (*((volatile unsigned long *)0x40005520))
//#define GPIO_PORTB_CR_R         (*((volatile unsigned long *)0x40005524))
//#define GPIO_PORTB_AMSEL_R      (*((volatile unsigned long *)0x40005528))
//#define GPIO_PORTB_PCTL_R       (*((volatile unsigned long *)0x4000552C))
//#define GPIO_PORTB_ADCCTL_R     (*((volatile unsigned long *)0x40005530))
//#define GPIO_PORTB_DMACTL_R     (*((volatile unsigned long *)0x40005534))

////*****************************************************************************


////*****************************************************************************
////
//// GPIO registers (PORTD)
////
////*****************************************************************************
//#define GPIO_PORTD_DATA_BITS_R  ((volatile unsigned long *)0x40007000)
//#define GPIO_PORTD_DATA_R       (*((volatile unsigned long *)0x400073FC))
//#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x40007400))
//#define GPIO_PORTD_IS_R         (*((volatile unsigned long *)0x40007404))
//#define GPIO_PORTD_IBE_R        (*((volatile unsigned long *)0x40007408))
//#define GPIO_PORTD_IEV_R        (*((volatile unsigned long *)0x4000740C))
//#define GPIO_PORTD_IM_R         (*((volatile unsigned long *)0x40007410))
//#define GPIO_PORTD_RIS_R        (*((volatile unsigned long *)0x40007414))
//#define GPIO_PORTD_MIS_R        (*((volatile unsigned long *)0x40007418))
//#define GPIO_PORTD_ICR_R        (*((volatile unsigned long *)0x4000741C))
//#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x40007420))
//#define GPIO_PORTD_DR2R_R       (*((volatile unsigned long *)0x40007500))
//#define GPIO_PORTD_DR4R_R       (*((volatile unsigned long *)0x40007504))
//#define GPIO_PORTD_DR8R_R       (*((volatile unsigned long *)0x40007508))
//#define GPIO_PORTD_ODR_R        (*((volatile unsigned long *)0x4000750C))
//#define GPIO_PORTD_PUR_R        (*((volatile unsigned long *)0x40007510))
//#define GPIO_PORTD_PDR_R        (*((volatile unsigned long *)0x40007514))
//#define GPIO_PORTD_SLR_R        (*((volatile unsigned long *)0x40007518))
//#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4000751C))
//#define GPIO_PORTD_LOCK_R       (*((volatile unsigned long *)0x40007520))
//#define GPIO_PORTD_CR_R         (*((volatile unsigned long *)0x40007524))
//#define GPIO_PORTD_AMSEL_R      (*((volatile unsigned long *)0x40007528))
//#define GPIO_PORTD_PCTL_R       (*((volatile unsigned long *)0x4000752C))
//#define GPIO_PORTD_ADCCTL_R     (*((volatile unsigned long *)0x40007530))
//#define GPIO_PORTD_DMACTL_R     (*((volatile unsigned long *)0x40007534))

////*****************************************************************************
////
//// GPIO registers (PORTE)
////
////*****************************************************************************
//#define GPIO_PORTE_DATA_BITS_R  ((volatile unsigned long *)0x40024000)
//#define GPIO_PORTE_DATA_R       (*((volatile unsigned long *)0x400243FC))
//#define GPIO_PORTE_DIR_R        (*((volatile unsigned long *)0x40024400))
//#define GPIO_PORTE_IS_R         (*((volatile unsigned long *)0x40024404))
//#define GPIO_PORTE_IBE_R        (*((volatile unsigned long *)0x40024408))
//#define GPIO_PORTE_IEV_R        (*((volatile unsigned long *)0x4002440C))
//#define GPIO_PORTE_IM_R         (*((volatile unsigned long *)0x40024410))
//#define GPIO_PORTE_RIS_R        (*((volatile unsigned long *)0x40024414))
//#define GPIO_PORTE_MIS_R        (*((volatile unsigned long *)0x40024418))
//#define GPIO_PORTE_ICR_R        (*((volatile unsigned long *)0x4002441C))
//#define GPIO_PORTE_AFSEL_R      (*((volatile unsigned long *)0x40024420))
//#define GPIO_PORTE_DR2R_R       (*((volatile unsigned long *)0x40024500))
//#define GPIO_PORTE_DR4R_R       (*((volatile unsigned long *)0x40024504))
//#define GPIO_PORTE_DR8R_R       (*((volatile unsigned long *)0x40024508))
//#define GPIO_PORTE_ODR_R        (*((volatile unsigned long *)0x4002450C))
//#define GPIO_PORTE_PUR_R        (*((volatile unsigned long *)0x40024510))
//#define GPIO_PORTE_PDR_R        (*((volatile unsigned long *)0x40024514))
//#define GPIO_PORTE_SLR_R        (*((volatile unsigned long *)0x40024518))
//#define GPIO_PORTE_DEN_R        (*((volatile unsigned long *)0x4002451C))
//#define GPIO_PORTE_LOCK_R       (*((volatile unsigned long *)0x40024520))
//#define GPIO_PORTE_CR_R         (*((volatile unsigned long *)0x40024524))
//#define GPIO_PORTE_AMSEL_R      (*((volatile unsigned long *)0x40024528))
//#define GPIO_PORTE_PCTL_R       (*((volatile unsigned long *)0x4002452C))
//#define GPIO_PORTE_ADCCTL_R     (*((volatile unsigned long *)0x40024530))
//#define GPIO_PORTE_DMACTL_R     (*((volatile unsigned long *)0x40024534))

////*****************************************************************************


////*****************************************************************************
////
//// Interrupt definition
////
////*****************************************************************************
//#define NVIC_EN0_R              (*((volatile unsigned long *)0xE000E100))
//#define NVIC_EN1_R              (*((volatile unsigned long *)0xE000E104))
//#define NVIC_EN2_R              (*((volatile unsigned long *)0xE000E108))
//#define NVIC_EN3_R              (*((volatile unsigned long *)0xE000E10C))
//#define NVIC_EN4_R              (*((volatile unsigned long *)0xE000E110))

//#define NVIC_PRI0_R             (*((volatile unsigned long *)0xE000E400))
//#define NVIC_PRI1_R             (*((volatile unsigned long *)0xE000E404))
//#define NVIC_PRI2_R             (*((volatile unsigned long *)0xE000E408))
//#define NVIC_PRI3_R             (*((volatile unsigned long *)0xE000E40C))
//#define NVIC_PRI4_R             (*((volatile unsigned long *)0xE000E410))
//#define NVIC_PRI5_R             (*((volatile unsigned long *)0xE000E414))
//#define NVIC_PRI6_R             (*((volatile unsigned long *)0xE000E418))
//#define NVIC_PRI7_R             (*((volatile unsigned long *)0xE000E41C))
//#define NVIC_PRI8_R             (*((volatile unsigned long *)0xE000E420))
//#define NVIC_PRI9_R             (*((volatile unsigned long *)0xE000E424))
//#define NVIC_PRI10_R            (*((volatile unsigned long *)0xE000E428))


////*****************************************************************************
////
//// SYSCTL_RCGC2
////
////*****************************************************************************

//////#define SYSCTL_RCGC2_GPIOF      0x00000020  // Port F Clock
////#define SYSCTL_RCGC2_GPIOE      0x00000010  // Port E Clock
////#define SYSCTL_RCGC2_GPIOD      0x00000008  // Port D Clock 
//////#define SYSCTL_RCGC2_GPIOC      0x00000004  // Port C Clock 
////#define SYSCTL_RCGC2_GPIOB      0x00000002  // Port B Clock 
////#define SYSCTL_RCGC2_GPIOA      0x00000001  // Port A Clock 
////	
//////PLL related Defines
////#define SYSCTL_RIS_R          (*((volatile unsigned long *)0x400FE050))	
////#define SYSCTL_RCC_R          (*((volatile unsigned long *)0x400FE060))
////#define SYSCTL_RCC2_R         (*((volatile unsigned long *)0x400FE070))	

//////SysTick related Defines	
////#define NVIC_ST_CTRL_R        (*((volatile unsigned long *)0xE000E010))
////#define NVIC_ST_RELOAD_R      (*((volatile unsigned long *)0xE000E014))
////#define NVIC_ST_CURRENT_R     (*((volatile unsigned long *)0xE000E018))
////	
////#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
//	

////////////////////////////////////////////////////////////


////////////////////////////////////////////////////////////
////   Function Prototypes
////////////////////////////////////////////////////////////
//////void PortF_Init(void);
//////void Delay(void);
//////void EnableInterrupts(void);
////void PLL_Init(void);
////void SysTick_Init(void);
////void SysTick_Wait_us(unsigned int delay_us);
////void SysTick_Wait_ms(unsigned int delay_ms);
////void SysTick_Wait_ns(unsigned int delay_ns);


//////Pre-defined functions
////void EnableInterrupts(void);  // Enable interrupts
////void WaitForInterrupt(void);	// Wait for interrupts



//////General
////int mainMenu(void);
////int regularCalculation(void);
////void clearOperationValues(void);
////float calculateResult(float* numbers, char* operations);
////char* convertIntToString(int val);
////char* convertFloatToString(double val, int decimalPlaces);

//#endif

