/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : factorials        				            **/
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


int fact(int Num);




/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
	
	int z;
	z = fact(5);
	printf("fact is %d",z);
}

/*************************************/
/***    function Implementations  ****/
/*************************************/

int fact(int Num)
{
	if((Num == 1) || (Num == 0))
	{
		return 1;
	}else
	{
		return Num * fact(Num - 1);
	}
	
}
