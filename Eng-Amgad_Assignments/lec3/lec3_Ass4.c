/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec3_Ass4    
 * @version : 1.00  
 * @brief   : Write a program that calculates the required heater
 *             activation time according to the input temperature of water.
 *               - if input temperature is from 0 to 30, then required
 *                  heating time = 7 mins.
 *                - if input temperature is from 30 to 60, then required
 *                  heating time = 5 mins.
 *                - if input temperature is from 60 to 90, then required
 *                  heating time = 3 mins.
 *                - if input temperature is more than 90, then required
 *                  heating time = 1 mins.
 *                - if temperature is invalid (more than 100), display
 *                  "Invalid input"
 *                  Example:
 *                  Input = 10 → output = 7
 *                  Input = 35 → output = 5
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
	/* define integer variable   */
	int temp;
	
	
	/* Ask user to enter the temperature */
	printf("please enter the temperature of water : ");
	/* take the value of temperature from user */
	scanf("%d",&temp);
	
	/* check on temp which entered by the user */
	if((temp >= 0) && (temp < 30 ))
	{
		printf("the required heater activation time is 7 mins\n");
	}else if ((temp >= 30) && (temp < 60 ))
	{
		printf("the required heater activation time is 5 mins\n");
	}else if ((temp >= 60) && (temp < 90 ))
	{
		printf("the required heater activation time is 3 mins\n");
	}else if ((temp >= 90) && (temp <= 100 ))
	{
		printf("the required heater activation time is 1 mins\n");
	}else
	{
		printf("invalid input\n");
		
	}
	
	
	
}