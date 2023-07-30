/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec2_lab3                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>


int main()
{
	/* define Local variable */ 
	int num ;

	/*  Ask the user to enter num  */
	printf("please Enter number : ");
	
	/* take from the user to enter num */
	scanf("%d",&num);
	
	if(num % 2 == 0)
	{
		/* print if the num is Even or odd  */
		printf("Number is Even");
	}else if(num % 2 == 1)
	{
		/* print if the num is Even or odd  */
		printf("Number is odd");
	}
	
	
}