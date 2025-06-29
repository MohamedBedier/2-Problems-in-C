/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec4_Ass5    
 * @version : 1.00  
 * @brief   : Write a program to reverse a number
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
/* define  int varibles   */
	int Number ,x , Local_NewNum=0;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	
	/* reverse a number */
	while(Number != 0 )
	{
		x = Number % 10; // 124  4>>2>>1
		Number = Number / 10; 
		Local_NewNum = Local_NewNum*10 + x;
	}
	printf("Reverse number is : %d",Local_NewNum);
}