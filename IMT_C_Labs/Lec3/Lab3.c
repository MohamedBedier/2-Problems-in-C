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
	int Count;
	int num;
	float avg;
	/* this variable is declered with initialized */
	int sum =0 ;

	/* ask the user to enter 10 numbers */
	printf("Enter the 10 numbers ");
	
	
	
/* we know the times of the loop ,for this we use for loop */
for(Count = 0 ; Count < 10 ; Count++)
{
	/* message for the user */
	printf("Number-%d :",Count);
	
	/* take the numbers from user */
	scanf("%d",&num);
	
	/* this equation to calculate sum */
	sum += num;
}
    /* this equation to calculate avg */
	/* we make promotion casting to float to avoid any unbehavior results */
	avg = (float)sum / 10.0;
	
   /* print sum */
	printf("the sum of 10 numbers is : %d\n",sum);
	   /* print avg */
	printf("the average is : %0.6f",avg);
}