// 1. Pre-processor Directives Section
// Constant declarations to access port registers using 
// symbolic names instead of addresses
#include <stdio.h>   // standard C library 
#include "UART.h"    // functions to implment input/output
#include "TExaS.h"   // Lab grader functions 
#include "MiniProj_PLL.h" 
#include "keypad.h"
#include "MiniProj_LCD.h"
//#include "tm4c123gh6pm.h" 



// Function Prototypes
void Keypad_Init(void);
//void Delay(void);
//unsigned long Switch_Input(void);
void PLL_Init(void);
void SysTick_Init(void);
void SysTick_Wait(unsigned long delay); 
char Keypad_scan (void);
char hamada = 'n'; 
//float samia;

//int main(void){
//UART_Init();
//Keypad_Init();
//PLL_Init(); // initialise the PLL
//SysTick_Init();     // initialise the SysTick 
//printf("\nBBC English ");
//while(1){
///*In = GPIO_PORTE_DATA_R;
//GPIO_PORTD_DATA_R = 0x02;
//printf("\n %lu", In);*/
////printf("\n Row 1 = %lu", PE1); // Pin 5
////printf("\n Row 2 = %lu", PE2); // Pin 6
////printf("\n Row 3 = %lu", PE3); // Pin 7
////printf("\n Row 4 = %lu", PE4); // Pin 8
////Delay();

void Systick_Wait(unsigned long delay_ms){
for( int i=0; i<delay_ms; i++) {
NVIC_ST_RELOAD_R = 50000;
NVIC_ST_CURRENT_R = 0; 
while ((NVIC_ST_CTRL_R & 0x00010000)==0){}
}
}

char Keypad_scan (void) {
 hamada='n';
	
	for ( int c = 0; c <= 3; c++) {
	//GPIO_PORTD_DATA_R = 0x00;
	SysTick_Wait(80000); //1ms
		if (c == 0) // each coloumn is defined from PD0-PD3 
			{ 
				GPIO_PORTD_DATA_R = 0x01; // pd0 
			} 
			else if(c == 1) 
				{    
				GPIO_PORTD_DATA_R = 0x02; // pd1
				}
			else if (c == 2) 
				{
				GPIO_PORTD_DATA_R = 0x04; // pd2 
				} 
			else if (c == 3)
				{
				GPIO_PORTD_DATA_R = 0x08; //pd3
				}


	SysTick_Wait(80000); 
		while (PE1)  // While any button is pressed in 
			{
			switch (c)
				{
		case 0: do{SysTick_Wait(800000);} // 10ms 
						while(PE1);
					hamada=1;
					//ReadNumber(1); 
					lcdWriteData('1');
					
					//SysTick_Wait(800000);
		break;   

		case 1: do{SysTick_Wait(800000);}
			while(PE1);
          hamada=2;
					//ReadNumber(2);
					lcdWriteData('2');
//SysTick_Wait(800000);
		break;

		case 2: do{SysTick_Wait(800000);}
			while(PE1);
          hamada=3;
				//	ReadNumber(3);
					lcdWriteData('3');
//SysTick_Wait(800000);
		break;
		case 3: do{SysTick_Wait(800000);}
			while(PE1);
          hamada='+';
					lcdWriteData('+');
		break; 
		} 
	} 
	while (PE2)
		{
	switch (c) {
		case 0: do{SysTick_Wait(800000);}
	while(PE2);
          hamada=4;
					//ReadNumber(4);
					lcdWriteData('4');
		break;   

		case 1: do{SysTick_Wait(800000);}
		while(PE2);
          hamada=5;
					//ReadNumber(5);
					lcdWriteData('5');
		break;

		case 2: do{SysTick_Wait(800000);}
		while(PE2);
          hamada=6;
					//ReadNumber(6);
					lcdWriteData('6');
		break;

		case 3: do{SysTick_Wait(800000);}
			while(PE2);
          hamada='-';
					lcdWriteData('-');
					
		break; 
	} 
} 
while (PE3) {
switch (c) {
case 0: do{SysTick_Wait(800000);}
while(PE3);
          hamada=7;
					//ReadNumber(7);
					lcdWriteData('7');
break;   
case 1: do{SysTick_Wait(800000);}
while(PE3);
          hamada=8;
					//ReadNumber(8);
					lcdWriteData('8');
break;
case 2: do{SysTick_Wait(800000);}
while(PE3);
          hamada=9;
					//ReadNumber(9);
					lcdWriteData('9');
break;
case 3: do{SysTick_Wait(800000);}
while(PE3);
          hamada='*';
					lcdWriteData('*');
break;
} 
}
while (PE4) { 
switch (c) {
case 0: do{SysTick_Wait(800000);}
while(PE4);
          hamada='C';
					//lcdClearScreen();
break;   
case 1: do{SysTick_Wait(800000);}
while(PE4);
          hamada=0; 
					//ReadNumber(0);
					lcdWriteData('0');
break;
case 2: do{SysTick_Wait(800000);}
while(PE4);
          hamada='#';
					lcdWriteData('=');
break;
case 3: do{SysTick_Wait(800000);}
while(PE4);
          hamada='/';
					lcdWriteData('/');
break;
} 
}
}


return hamada; 

}


void Keypad_Init(void){ volatile unsigned long delay;
  SYSCTL_RCGC2_R |= 0x00000010;     // 1) E clock
  delay = SYSCTL_RCGC2_R;           // delay
GPIO_PORTE_CR_R = 0x1E;
  GPIO_PORTE_AMSEL_R = 0x00;        // 3) disable analog function
  GPIO_PORTE_PCTL_R = 0x00000000;   // 4) ****GPIO clear bit PCTL
  GPIO_PORTE_DIR_R = 0x00;          // 5) PE3-PE0 input
  GPIO_PORTE_AFSEL_R = 0x00;        // 6) no alternate function
GPIO_PORTE_PDR_R = 0x1E;          // enable pullup resistors on PF4,PF0       
GPIO_PORTE_DEN_R = 0x1E;          // 7) enable digital pins PE4-PE1
SYSCTL_RCGC2_R |= 0x00000008;     // 1) D clock
delay = SYSCTL_RCGC2_R;           // delay
GPIO_PORTD_LOCK_R = 0x4C4F434B;   // 2) unlock PortD
GPIO_PORTD_CR_R |= 0x0F;           // allow changes to PE3-0
GPIO_PORTD_AMSEL_R = 0x00;        // 3) disable analog function
  GPIO_PORTD_PCTL_R = 0x00000000;   // 4) ****GPIO clear bit PCTL
GPIO_PORTD_DIR_R = 0x0F;          // 5) PD3-PD0 output
GPIO_PORTD_AFSEL_R = 0x00;        // 6) no alternate function
//GPIO_PORTD_PUR_R = 0x0F;  
GPIO_PORTD_DEN_R = 0x0F;          // 7) enable digital pins PD3-PD0 
}

/*char get_key(void)           //get key from user
{
	char s = Keypad_scan();              //assume no key pressed
	SysTick_Wait(80000);
	while(s == 'n') {              //wait untill a key is pressed
		s = Keypad_scan(); 
	}  
				return 's';//scan the keys again and again
	//when key pressed then return its value
}*/
/*char s = Keypad_scan();
				SysTick_Wait(80000);
				while (s == 'n'){
			 //SysTick_Wait(80000);
				 s = Keypad_scan(); */

//void ReadNumber (float input) 
//	{
//			if (samia == 0){
//					samia += input; 
//					}
//			else if (samia != 0){
//			 samia = (samia * 10);
//				samia += input; 
//			}
//	}
