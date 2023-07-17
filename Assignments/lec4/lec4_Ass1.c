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
	/* define two integers   */
	int Number , i , counter = 0 ;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	for(i = 1 ; i <= Number ; i++)
	{
		if(Number % i == 0)
		{
			counter++;
		}
	}
	if(counter == 2 )
	{
		printf("%d is a Prime number",Number);
	}else{
		printf("%d is not a Prime number",Number);
	}
	
	
	
	
	
}