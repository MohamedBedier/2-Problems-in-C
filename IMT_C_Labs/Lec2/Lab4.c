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
	int grad ;

	/*  Ask the user to enter grad  */
	printf("please Enter grad : ");
	
	/* take from the user to enter grad */
	scanf("%d",&grad);
	
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