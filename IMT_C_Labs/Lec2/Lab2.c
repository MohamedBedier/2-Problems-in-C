/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec2_lab2                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>


int main()
{
	/* define Local variables */ 
	int working_hours;
	float salary;
	
	/*  Ask the user to enter working_hours  */
	printf("please Enter your working_hours : ");
	
	/* take from the user to enter working_hours */
	scanf("%d",&working_hours);
	
	if(working_hours >= 40)
	{
		/* calculate the working_hours */
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