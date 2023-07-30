/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : lec3_lab2                                   **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/



/*************************************************************/
/*************************************************************/
/**                                                         **/
/**  lab2: Calc salary                                      **/
/**   hour rate 50                                          **/             
/**                                                         **/
/*************************************************************/
/*************************************************************/

/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
	/* define two integers   */
	float salary ,  working_hours ;
	/* Ask working hours from user  */
	printf("please enter working hours : ");
	
	/* take working_hours from user */ 
	scanf("%f",&working_hours);
	if (working_hours >= 50)
	{
		salary = working_hours * 50.0 ;
	}else
	{
		salary = working_hours * 50.0 - working_hours * 50.0 * 0.1 ;
	}
	
	printf("salary is : %0.2f \n ", salary);
	

}