/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>

/* this is the entry point of the program */
int main()
{
	/* define Local variable */ 
	/* the variables are declered without initialized */
	int num ;

	/*  Ask the user to enter num  */
	printf("please Enter number : ");
	
	/* take from the user to enter num */
	scanf("%d",&num);
	
	/* check on num if is even or odd */
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