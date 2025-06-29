/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec3_Ass1    
 * @version : 1.00  
 * @brief   : Write a program that takes one character and checks
 *			  if it alphabet or not.
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define a variable to carry to a character from user */
	char Local_Character;
	/*define a variable to carry to the decimal value of the character from ascii table */
	int Local_Decimal_value;
	
	/* Ask user to enter the Character */
	printf("please enter the Character : ");
	/* take the value Character from user */
	scanf("%c",&Local_Character);
	
	/* assign the decimal value of the character */
	Local_Decimal_value = Local_Character;
	
	/* checks if it alphabet or not */
	if(((Local_Decimal_value >= 65) && (Local_Decimal_value <= 90 )) )
	{
		printf("character is Alphabit\n");
	}else if (((Local_Decimal_value >= 97) && (Local_Decimal_value <= 122 )))
	{
		printf("character is Alphabit\n");	
	}else {
		printf("character not Alphabit\n");
	}
}