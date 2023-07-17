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


void swap(int Num1 , int Num2);

/**  define two global variable  **/
int A = 10 , B = 30 ;




/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
	
	printf("Before swapping A = %d , B = %d \n",A,B);
	swap(A , B);
	printf("after swapping A = %d , B = %d \n",A,B);
	
}

/*************************************/
/***    function Implementations  ****/
/*************************************/

void swap(int Num1 , int Num2)
{
	
	int temp;
	
	temp = A ;
	A = B ;
	B = temp ;
	
}