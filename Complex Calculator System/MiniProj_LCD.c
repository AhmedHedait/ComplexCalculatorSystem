#include "MiniProj_LCD.h"
//#include "tm4c123gh6pm.h"
#include "MiniProj_PLL.h"
#include <stdio.h>
#include <math.h>
#include "main.h"



		void port_Init(void)
		{
			volatile unsigned long delay;
			//Port A
			SYSCTL_RCGC2_R = 0x00000001;    		 // 1) A clock
			delay = SYSCTL_RCGC2_R;          		 // delay
			GPIO_PORTA_LOCK_R = 0x4C4F434B; 	   // 2) unlock PortB
			GPIO_PORTA_CR_R |= 0x0C;             // allow changes to PA2 ,PA3
			GPIO_PORTA_AMSEL_R = ~0x0C;          // 3) disable analog function //
			GPIO_PORTA_PCTL_R |= 0x00000000;     // 4) GPIO clear bit PCTL
			GPIO_PORTA_DIR_R |= 0x0C;            // 5) PA2, PA3 output
			GPIO_PORTA_AFSEL_R = ~0x0C;          // 6) no alternate function
			GPIO_PORTA_PUR_R = 0x00;             // enable pullup resistors on PA2,PA3
			GPIO_PORTA_DEN_R |= 0x0C;            // 7) enable digital pins PA2,PA3

			//port B
			SYSCTL_RCGC2_R |= 0x00000002;        // 1) B clock
			delay = SYSCTL_RCGC2_R;              // delay
			GPIO_PORTB_LOCK_R = 0x4C4F434B;      // 2) unlock PortB
			GPIO_PORTB_CR_R = 0x0F;              // allow changes to PB3-0
			GPIO_PORTB_AMSEL_R = 0x00;           // 3) disable analog function
			GPIO_PORTB_PCTL_R = 0x00000000;      // 4) GPIO clear bit PCTL
			GPIO_PORTB_DIR_R = 0x0F;             // 5) PB5,PB4,PB3,PB2 output
			GPIO_PORTB_AFSEL_R = 0x00;           // 6) no alternate function
			GPIO_PORTB_PUR_R = 0x00;             // enable pullup resistors on PB3,PB2,PB1,PB0
			GPIO_PORTB_DEN_R = 0x0F;             // 7) enable digital pins PB3-PB0
		}

/********************************************************************************************/

		void lcdENPulse(void)									 //pulse to latch the EN line
		{
			lcdEN	=	0x04;
			SysTick_Wait_ns(36);								//450ns delay pulse width
			lcdEN=0x00;													//this is to make PA2 0
	
		}
		
/********************************************************************************************/	
	
		//The following function is to initialize the LCD according to page 45 & 46 of the datasheet
		
		void lcdInit(void)										
		{
			lcdEN	=	0x00;												//This sets PA2 (Enable pin of the LCD) to zero
			
			SysTick_Wait_ms(15);								//set a delay of at least 15ms as mentioned on page 45 of the datasheet	
			lcdRS	=	0x00;												//This sets PA3 (Register Select pin) to zero
			
			PB0_3=0x30;												  //Writing 0x30 to lcdDB which in this case pins 0-3 of port B
			lcdENPulse();												//Now the Enable line is pulsed
	
	
			SysTick_Wait_ms(5); 								//wait at least 4.1ms before sending the 0x30
			PB0_3=0x30;													//Writing 0x30 to pins 0-3 again
			lcdENPulse();												//Enable line pulsed once again
	
			SysTick_Wait_us(100); 							//delay of 100 micro seconds using systick_wait_us created in the PLL
			PB0_3=0x30;													//Writing 0x30 to pins 0-3 for the third time
			lcdENPulse();												//Enable line pulsed once again
													
	
	
			PB0_3=0x02;													//0x02 sent to pins 0 to 3 of Port B
			lcdENPulse();												//Enable line pulsed once again

			lcdWriteCommand(0x28);					  	//4bit data and 2 lines with a 5*8 font  (mentioned on page 24 of the datasheet)
			lcdWriteCommand(0x06);	  				  //incrementing the cursor
			lcdWriteCommand(0x0F);	  				  //diplay on/off
	
		}
/********************************************************************************************/
		
		void lcdWriteCommand(unsigned char c)
		{
			lcdRS=0x00;												  //This sets PA3 (Register Select pin) to zero
			SysTick_Wait_us(40);							  //Wair 40 micro seconds according to the datasheet
			
			PB0_3=(c & 0xF0) >>4;						  	//Writing the high nibble first
			lcdENPulse();											  //latch the EN line
			SysTick_Wait_ms(5);   						  //wait 5ms

			PB0_3=(c & 0x0F);									  //Writing the low nibble first
			lcdENPulse();											  //latch the EN line
			SysTick_Wait_ms(5);   						 //5ms delay

		}
/********************************************************************************************/

		void lcdWriteData(char c) 
		{
			lcdRS = 0x08;											//Setting the RS pin to 0x08 since PA3 is in the first nibble (0000 1000)
			SysTick_Wait_us(40);						  //Waiting 40 micro seconds

	
			PB0_3=(c & 0xF0) >>4;							// Writing the high nibble to pins 0-3 of port B with a bit shift and bit mask
			lcdENPulse();											//latch or pulse the enable line 
	
			SysTick_Wait_us(200);					 	  //a delay of 200 micro seconds as mentioned in the datasheet
	
			PB0_3=(c & 0x0F);							   // Writing the low nibble to pins 0-3 of port B 
			lcdENPulse();										 //latch or pulse the enable line 
		
		}

/********************************************************************************************/
		
		//function used to print a string to the screen
		void lcdWriteRamString(char *string) 	
		{
			while(*string) 
				{
					lcdWriteData(*string);
					string++;
				}
		}
		
/********************************************************************************************/

		//function used to clear the screen in the main page
		void lcdClearScreen(void) 
		{
			lcdWriteCommand(0x01);
		}

/********************************************************************************************/

//		void lcdGoto(unsigned char row, unsigned char col)
//		{
//			if (row==0)
//				{
//					lcdWriteCommand(0x80 +col);
//				}
//			else
//				{
//					lcdWriteCommand(0xC0 +col);
//				}
//	
//		}
/********************************************************************************************/
		



