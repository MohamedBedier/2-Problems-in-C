/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Even || odd Number                          **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/




/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 int Number;
	
	/* Ask user to enter Number */
	printf("please enter the value of Number : ");
	/* take the value num1 from user */
	scanf("%d",&Number);
	if(Number%2 == 0)
	{
		printf("Number is Even");
		
	}else
	{
		printf("Number is Odd");
	}

}