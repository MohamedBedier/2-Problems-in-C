/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 2                                **/
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
	char character;
	char Decimal_value;
	
	/* Ask user to enter the Character */
	printf("please enter the Character : ");
	/* take the value Character from user */
	scanf("%c",&character);
	if((character >= 97)&&(character <= 122))
	{
	  /* Equation  */
	Decimal_value = character -32 ;
	
		printf("character is upper Alphabit %c\n",Decimal_value);
	}else
	{
	  printf("character is upper Alphabit %c\n",character);
	}
	

	
	
}