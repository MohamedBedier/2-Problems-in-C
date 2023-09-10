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
	/* define array to carry the variables which the user entered it */
	int arr[10];
	/* define the loop counter */
	int count;
	
	/* this is the loop to enter 10 elements from the user */
	for(count = 0 ; count < 10 ; count++)
	{
		/* message to user */
		printf("please enter number %d:",count);
		/* take elements from the user */
		scanf("%d",&arr[count]);
	}
	/* message to user */
	printf("the values in reversed order \n");
	
	/* this is the loop to print 10 elements reversed */
	for(count = 9 ; count >= 0 ; count--)
	{
		/* print elements */
		printf("%d\n",arr[count]);
		
	}
	
	
	
	
}