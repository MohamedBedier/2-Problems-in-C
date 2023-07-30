/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 1                                **/
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
	/* define two integers   */
	int Num1 , Num2 ;
	
	/* Ask user to enter the Number1 */
	printf("please enter the Number1 : ");
	/* take the value Number from user */
	scanf("%d",&Num1);
	/* Ask user to enter the Number2 */
	printf("please enter the Number2 : ");
	/* take the value Number2 from user */
	scanf("%d",&Num2);
	
	if(Num1 % Num2 == 0) 
	{
		printf("the first _num1_ is multiple of the second.");
	}else if(Num2 % Num1 == 0)
	{
		printf("the first _num2_ is multiple of the second .");
	}else{
		printf("Wrong error \n");
	}
	
	
	
}