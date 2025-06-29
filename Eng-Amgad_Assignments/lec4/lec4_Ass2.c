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
	int Number , i , flag = 0 ;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	
	
	
	for(i = 1 ; i <= (int)(Number/2) ; i++)
	{
		/* 4 == 2 * 2
		   9 == 3 * 3	
		   25== 5 * 5	
		   */
		if(Number == i * i )
		{
			printf("%d is perfect square ", Number);
			/* to end main func write return here  */
			return 0 ;
		}
	}
	
	/* if the number not perfect the compiler will exit from the loop and print not perfect */
				printf("%d is not perfect square ", Number);

	
}