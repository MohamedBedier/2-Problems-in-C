/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Escape sequence character                   **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here)*/
/* Every program must have only one main function  */

int main(void)
{
  	/* define two variables to carry two integers from user */
	int Local_Num_1;
	int Local_Num_2;
	
	/* define variables to carry summation, subtraction, anding, oring, and Xoring */
	int Local_sum = 0;
	int Local_sub = 0;
    int	Local_anding = 0;
	int Local_oring = 0;
	int Local_Xoring = 0;
	
	/* Ask user to enter the value of 1st integer */
	printf("please enter the value of 1st integer : ");
	/* take the value 1st integer from user */
	scanf("%d",&Local_Num_1);
	/* Ask user to enter the value of 2nd integer  */
	printf("please enter the value of 2nd integer : ");
	/* take the value 2nd integer from user */
	scanf("%d",&Local_Num_2);
	
	
	/* print summation */
	Local_sum = Local_Num_1 + Local_Num_2 ;
	printf("sum is %d \n", Local_sum);
 	/* print subtraction */
	Local_sub = Local_Num_1 - Local_Num_2 ;
	printf("sub is %d \n", Local_sub);
	/* print anding */
	Local_anding = Local_Num_1 & Local_Num_2 ;
	printf("anding is %d \n", Local_anding);
	/* print oring */ 
	Local_oring = Local_Num_1 | Local_Num_2 ;
	printf("oring is %d \n", Local_oring);
	/* print Xoring */
	Local_Xoring = Local_Num_1 ^ Local_Num_2 ;
	printf("Xoring is %d \n", Local_Xoring);
	
}
	