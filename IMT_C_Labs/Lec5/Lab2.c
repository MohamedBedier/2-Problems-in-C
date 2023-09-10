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
	/* define sum variable and it must be initialize by 0*/
	int sum=0;
	/* define avg variable */
	float avg;
	/* this is the loop to enter 10 elements from the user */
	for(count = 0 ; count < 10 ; count++)
	{
		/* message to user */
		printf("please enter number %d:",count);
		/* take elements from the user */
		scanf("%d",&arr[count]);
		/* cal the sum */
		sum += arr[count];
	}
	/* cal the avg */
	/* don't for get promotion casting to float */
	avg = (float)sum / 10.0;
	/* print sum */
	printf("sum of array elements = %d\n",sum);
	/* print avg */
	printf("avgerage of array elements = %0.2f\n",avg);
}