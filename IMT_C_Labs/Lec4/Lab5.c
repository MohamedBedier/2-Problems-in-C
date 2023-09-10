/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>

/* prototype of factorial func*/
int factorial(int num);
/* this is the entry point of the program */
int main()
{
	/* define Local variable */ 
	/* the variables are declered without initialized */
	int num;
	int fact=1;

	/*  Ask the user to enter num  */
	printf("please Enter a number : ");
	
	/* take from the user to enter num */
	scanf("%d",&num);
	
	/* call the factorial function*/
	fact = factorial(num);

printf("fact is : %d",fact);	
}

/* the implementation of factorial func */
int factorial(int num)
{
	/* in case of 1 or 0 must return 1*/
	if(num == 0 || num == 1)
	{
	return 1 ;
	}else
	{
		/* factorial using factorial function*/
		return (num * factorial(num -1));
	}
}