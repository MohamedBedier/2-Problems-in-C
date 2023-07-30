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
	/* define character and integer   */
	char Character;
	int Decimal_value;
	
	/* Ask user to enter the Character */
	printf("please enter the Character : ");
	/* take the value Character from user */
	scanf(" %c",&Character);
	Decimal_value = Character ;
	if(((Decimal_value >= 65) && (Decimal_value <= 90 )) )
	{
		printf("character is Alphabit\n");
	}else if (((Decimal_value >= 97) && (Decimal_value <= 122 )))
	{
	printf("character is Alphabit\n");	
	}else {
		printf("character not Alphabit\n");
	}
	
	
	
}