/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 4                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/




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
	
	if((temp > 0) && (temp < 30 ))
	{
		printf("the required heater activation time is 7 mins\n");
	}else if ((temp > 30) && (temp < 60 ))
	{
		printf("the required heater activation time is 5 mins\n");
	}else if ((temp > 60) && (temp < 90 ))
	{
		printf("the required heater activation time is 3 mins\n");
	}else if ((temp > 90) && (temp <= 100 ))
	{
		printf("the required heater activation time is 1 mins\n");
	}else
	{
		printf("invalid input\n");
		
	}
	
	
	
}