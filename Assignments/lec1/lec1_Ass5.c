/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Escape sequence character                   **/
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


/* this is the main function (the program start from here)*/
/* Every program must have only one main function  */

int main(void)
{
   /* define  integers   */
	int num1 , num2 , sum = 0 , sub = 0 , anding = 0 ,oring = 0,Xoring = 0 ;
	
	/* Ask user to enter the value of num1 */
	printf("please enter the value of num1 : ");
	/* take the value num1 from user */
	scanf("%d",&num1);
	/* Ask user to enter the value of num2  */
	printf("please enter the value of num2 : ");
	/* take the value num2 from user */
	scanf("%d",&num2);
	
	
	/* print summation */
	sum = num1 + num2 ;
	printf("sum is %d \n", sum);
 	/* print subtraction */
	sub = num1 - num2 ;
	printf("sub is %d \n", sub);
	/* print anding */
	anding = num1 & num2 ;
	printf("anding is %d \n", anding);
	/* print oring */ 
	oring = num1 | num2 ;
	printf("oring is %d \n", oring);
	/* print Xoring */
	Xoring = num1 ^ num2 ;
	printf("Xoring is %d \n", Xoring);
	
	
	
}
	