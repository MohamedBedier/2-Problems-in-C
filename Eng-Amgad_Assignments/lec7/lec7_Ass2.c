/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec7_Ass2    
 * @version : 1.00  
 * @brief   : Write a program that computes the nth term of the
 *            arithmetic series: 1, 3, 5, 7, 9, …
 *            Run the program to compute the 100th term of the given series
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
	/* define integers varibles  */
	int First_Number , Dif_Number, Req_Number ,Result ;
	
	/* Ask the user to enter the First_Number */
	printf("please,enter the First_Number: ");
	/* take the First_Number from user */
	scanf("%d",&First_Number);
	/* Ask the user to enter the First_Number */
	printf("please,enter the Req_Number: ");
	/* take the Req_Number from user */
	scanf("%d",&Req_Number);
	/* Ask the user to enter the Diference between two num in series */
	printf("please,enter the Dif_Number: ");
	/* take the Diference between two nums in series from user */
	scanf("%d",&Dif_Number);
	
	/* equation */
	Result = First_Number + Dif_Number * (Req_Number - 1);
	printf("%d",Result);
	
}