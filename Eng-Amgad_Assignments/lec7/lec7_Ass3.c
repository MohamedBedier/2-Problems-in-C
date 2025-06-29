/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec7_Ass1    
 * @version : 1.00  
 * @brief   : Write a program that computes the nth term of the
 *            geometric series: 1, 3, 9, 27, …
 *            Run the program to compute the 10th term of the given series
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/


/* protype of function */
void Count_ones(int Number);

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>

#include <math.h>
/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define integers varibles  */
	int First_Number , common_ratio, Req_Number ,Result ;
	
	/* Ask the user to enter the First_Number */
	printf("please,enter the First_Number: ");
	/* take the First_Number from user */
	scanf("%d",&First_Number);
	/* Ask the user to enter the First_Number */
	printf("please,enter the Req_Number: ");
	/* take the Req_Number from user */
	scanf("%d",&Req_Number);
	/* Ask the user to enter the Diference between two num in series */
	printf("please,enter the common_ratio: ");
	/* take common_ratio in series from user */
	scanf("%d",&common_ratio);
	
	/* equation */
	Result = First_Number * pow(common_ratio, Req_Number-1);
	printf("%d",Result);
	
}




