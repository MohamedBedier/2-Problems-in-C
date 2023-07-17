/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : functions        				            **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
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


/*************************************/
/***    function prototypes       ****/
/*************************************/

int F_Add(int Num1 , int Num2);






/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 int Result = 0 ;
	Result = F_Add(9 , 10);
	printf("sum of two numbers is %d",Result);
}

/*************************************/
/***    function Implementations  ****/
/*************************************/

int F_Add(int Num1 , int Num2)
{
	
	int sum = 0 ;
	sum = Num1 + Num2 ;
	return sum ;
}