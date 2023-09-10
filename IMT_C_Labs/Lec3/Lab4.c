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

	/*  Ask the user to enter answer  */
	printf("please Enter answer of 3 x 4 =  ");
	
	/* take from the user to enter num */
	scanf("%d",&num);

	/* check on the correct answer */
	while(num != 12)
	{
		/* ask the user to enter another num */
		printf("Not correct. Please try again: ");
		/* take from the user to enter num */
		scanf("%d",&num);
	}
	/* if enter the correct answer print Thank you */
	printf("Thank you");
	
	
}