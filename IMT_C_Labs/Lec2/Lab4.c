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
	int grad ;

	/*  Ask the user to enter grad  */
	printf("please Enter grad : ");
	
	/* take from the user to enter grad */
	scanf("%d",&grad);
	
	/* check on grad */
	if(grad >= 0 && grad < 50)
	{
		/* print the status of the student */
		printf("your rating is failed\n");
	}else if(grad >= 50 && grad < 65)
	{
		/* print the status of the student */
		printf("your rating is Normal\n");
	}else if(grad >= 65 && grad < 75)
	{
		/* print the status of the student */
		printf("your rating is Good\n");
	}else if(grad >= 75 && grad < 85)
	{
		/* print the status of the student */
		printf("your rating is Very Good\n");
	}else if(grad >= 85 )
	{
		/* print the status of the student */
		printf("your rating is Excellent\n");
	}
	
	
}