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
	/* define Local variables */ 
	/* the variables are declered without initialized */
	int working_hours;
	float salary;
	
	/*  Ask the user to enter working_hours  */
	printf("please Enter your working_hours : ");
	
	/* take from the user to enter working_hours */
	scanf("%d",&working_hours);
	
	/* check on working_hours */
	if(working_hours >= 40)
	{
		/* calculate salary based on working_hours */
		salary = working_hours * 50;
		
		/* print the salary  */
		printf("your salary is %0.1f",salary);
		
	}else 
	{
		/* calculate the working_hours */
		salary = working_hours * 50 - working_hours * 50 * 0.1;
		
		/* print the salary  */
		printf("your salary is %0.1f",salary);
	}
	
	
}