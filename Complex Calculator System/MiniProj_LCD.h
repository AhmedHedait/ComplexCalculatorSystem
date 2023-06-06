#ifndef MiniProj_LCD_h
#define MiniProj_LCD_h

 
//defining port A
#define GPIO_PORTA_DATA_R       (*((volatile unsigned long *)0x400043FC))
#define GPIO_PORTA_DIR_R        (*((volatile unsigned long *)0x40004400))
#define GPIO_PORTA_AFSEL_R      (*((volatile unsigned long *)0x40004420))
#define GPIO_PORTA_PUR_R        (*((volatile unsigned long *)0x40004510))
#define GPIO_PORTA_DEN_R        (*((volatile unsigned long *)0x4000451C))
#define GPIO_PORTA_LOCK_R       (*((volatile unsigned long *)0x40004520))
#define GPIO_PORTA_CR_R         (*((volatile unsigned long *)0x40004524))
#define GPIO_PORTA_AMSEL_R      (*((volatile unsigned long *)0x40004528))
#define GPIO_PORTA_PCTL_R       (*((volatile unsigned long *)0x4000452C))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
	
//defining the pins used in port A
#define lcdEN											(*((volatile unsigned long *)0x40004010))				//EN pin PA2 
#define lcdRS											(*((volatile unsigned long *)0x40004020))				//RS pin PA3
	

//defining port B
#define GPIO_PORTB_DATA_R       (*((volatile unsigned long *)0x400053FC))
#define GPIO_PORTB_DIR_R        (*((volatile unsigned long *)0x40005400))
#define GPIO_PORTB_AFSEL_R      (*((volatile unsigned long *)0x40005420))
#define GPIO_PORTB_PUR_R        (*((volatile unsigned long *)0x40005510))
#define GPIO_PORTB_DEN_R        (*((volatile unsigned long *)0x4000551C))
#define GPIO_PORTB_LOCK_R       (*((volatile unsigned long *)0x40005520))
#define GPIO_PORTB_CR_R         (*((volatile unsigned long *)0x40005524))
#define GPIO_PORTB_AMSEL_R      (*((volatile unsigned long *)0x40005528))
#define GPIO_PORTB_PCTL_R       (*((volatile unsigned long *)0x4000552C))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
	

#define PB0_3										(*((volatile unsigned long *)0x4000503C))				//pins 0-3 of port B

//#define lcdDB(x)	PB2_5 = x<<2		//bit specific addressing 
////#define lcdDB(x)	PB2_5 = x>>2		//bit specific addressing 

/********************************************************************************************/


	//functions used in lcd.c
		void port_Init(void);
		void lcdInit(void);
		void lcdENPulse(void);
		void lcdWriteCommand(unsigned char c);
		void lcdClearScreen(void);
		void lcdWriteData(char c);
		void lcdWriteRamString(char *string);
//void lcdGoto(unsigned char row, unsigned char col);
#endif



