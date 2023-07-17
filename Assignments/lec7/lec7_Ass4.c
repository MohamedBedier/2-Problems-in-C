/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 7                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
int F_Fibonacci(int n);

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
	int n , result , counter;
	
	/* Ask the user to enter the First_Number */
	printf("please,enter the First_Number: ");
	/* take the First_Number from user */
	scanf("%d",&n);
	for(counter = 0 ; counter <  n ; counter++)
	{
		/* calling function */
		result =  F_Fibonacci(counter);
		printf("%d ",result);
	}
}

int F_Fibonacci(int n)
{
	int sum = 1 ;
	
	if(n == 0 || n == 1)
	{
		return sum = 1 ;
	}else 
	{
	  sum = F_Fibonacci(n-1) + F_Fibonacci(n-2);
		return sum;
	}
	
}