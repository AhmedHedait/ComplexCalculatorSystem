#include "MiniProj_LCD.h"
#include "keypad.h"
#include "MiniProj_PLL.h"
#include "math.h"
#include "main.h"
//#include "tm4c123gh6pm.h"
#include "UART.h"
#include <stdio.h>
#include <string.h>		

char Keypad_scan(void);
void Keypad_Init(void);
void PLL_Init (void); 
float Value(void);
void SysTick_Init (void);
void SysTick_Wait (unsigned long delay);
char get_key(void);
char s; 
char number;
char aug[50];															//Array to store..
float value_1;														//Variable to store the first value entered by the user
float value_2;														//Variable to store the second value entered by the user
float total;															//Variable to store the answer value entered by the user
char A;
float V; 



int main(void) 
	
	{
	
	A = 0; 																							//setting variable A to zero at the start
	PLL_Init();			// PLL Init													//calling main functions used 
	SysTick_Init();	//SysTick Init
	UART_Init();
	port_Init();	//port initialization
	lcdInit();
	Keypad_Init();
		
	
	lcdWriteRamString("By:Samia & Ahmed");							//to output our names as a string at the start
	//SysTick_Wait(400000000);														//delay for 5seconds
	//printf(" \n hamada");															//used to test the functionality of the code as we go along on coolterm
	//lcdClearScreen();																		//clear the screen at the start
	SysTick_Wait(80000);																//delay of 1ms
	//lcdClearScreen();
	//SysTick_Wait_ms(10);
	//lcdWriteRamString("SAMIA");												//used to test if the LCD screen was operating as intended
	//SysTick_Wait_ms(10);
	 //printf("HAMADA");
	while (1)																						//while loop containing the whole operation
	 { 
		
		number = Keypad_scan();
		//SysTick_Wait(80000);
			while (number == 'n')
				{
				
				number = A;
				printf ("%c", number);
					
			switch(number)	
				{
			//entering numbers
			case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: 
					printf("case = input");
					
					value_1 = Value();
					printf("\nValue 1 = %f\n",value_1);
					V = 0; 

			break; 
		
		//Operations
		case '+':
		value_2 = Value();
		printf("\nValue 2 = %f\n",value_2);
		total = value_1 + value_2; 
		printf("\nValue Total = %f\n",total);
		value_1 = 0;
		value_2 = 0;
		printf("case = addition");
		break;
		
		case '-':
		value_2 = Value();
		printf("\nValue 2 = %f\n",value_2);
		total = value_1 - value_2; 
		printf("\nValue Total = %f\n",total);
		value_1 = 0;
		value_2 = 0;
		printf("case = subtraction");
		break;
		
		case '*':
		value_2 = Value();
		printf("\nValue 2 = %f\n",value_2);
		total = value_1 * value_2; 
		printf("\nValue Total = %f\n",total);
		value_1 = 0;
		value_2 = 0;
		printf("case = multiply");
		break;
		
		case '/':
		value_2 = Value();
		printf("\nValue 2 = %f\n",value_2);
		
		if (value_2 == 0) 
			{	lcdWriteCommand(0xC0); // prints error bottom left of lcd screen
				lcdWriteRamString("Error");
  	 	}
		
		else {total = value_1 / value_2;} 
			
		printf("\nValue Total = %f\n",total);
		value_1 = 0;
		value_2 = 0;
		printf("case = division");
		break;
		
		case '#': // answer
		lcdWriteCommand(0xC0);   //sends it to the next line
		sprintf (aug, "%g", total); 
		lcdWriteRamString(aug); 
		lcdWriteCommand(0x02);	// sends it back to the first line
		printf("case = input"); 
		A = 0;
		break;
		
	  case 'C':
		lcdClearScreen(); 
		//lcdWriteCommand(0x02);
		
		//lcdWriteCommand(0xC0);
		value_1 = 0;
		value_2 = 0; 
		total = 0;
		//samia = 0; 
		printf("case = input");	
		A = 0;
		break; 
		
	}
 }
} }
		
float Value(void){
	while (1) {
		number = Keypad_scan();  // the stored value stored when keypad is pressed. 
		while (number == 'n')   // keypad not pressed. 
			{
			number = Keypad_scan(); 
			}
		if (number != 'n')    // if any key is pressed 
		//lcdWriteData(number);
		while (number >= 0 && number <= 9)
			{
			if (V == 0)
			{
			V += number; 
			} 
			else if (V != 0)
			{
				V = (V * 10); 
				V += number; 
			}	
	number = Keypad_scan(); 
}
	if(number == '+' || number == '-' || number == '*' || number == '/' || number == '#' || number == 'C' ){ // if any of the operations is pressed. 
		A = number;
		printf("\nA = %c/n",A);
		printf("\n wow \n");
		break; 
	}
	
 }
	
	return V; 
} 

