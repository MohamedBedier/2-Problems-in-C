/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 1                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/**********************************************************************/
/**																	 **/
/**  (1) Write a program that takes two integers from the user and   **/
/** print the results of this equation:							     **/
/** Result = ((num1 + num2) * 3) – 10								 **/
/**																	 **/
/**********************************************************************/


/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define two variables to carry two integers from user */
	int Local_Num_1;
	int Local_Num_2;
	
	/*define a variable to carry result */
	int Local_Result = 0;
	
	/* ask the user to enter Two integer */
	printf("please,Enter two integers : \n");
	
	/* take the first integer value from the user */
	printf("Integer 1 : ");
	scanf("%d",&Local_Num_1);
	
	/* take the 2nd integer value from the user */
	printf("Integer 2 : ");
	scanf("%d",&Local_Num_2);
	
	/* calculate the result of the equation */
	Local_Result = (( Local_Num_1 + Local_Num_2 ) * 3 ) - 10;
	
	/* print the results of this equation */
	printf("the results of this equation is : %d",Local_Result);
	

	
}