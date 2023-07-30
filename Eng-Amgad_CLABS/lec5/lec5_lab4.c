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

int Get_Max(int Num1 , int Num2);






/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
	int num1 , num2 , max_Number;
	/* Ask user to enter num1 */
	printf("PLease Enter num1 : \n");
	
	/* take num1 from user */
	scanf("%d",&num1);
	/* Ask user to enter num2 */
	printf("PLease Enter num2 : \n");
	
	/* take num2 from user */
	scanf("%d",&num2);
	
	max_Number= Get_Max(num1 , num2);
	printf("max_Number is %d\n",max_Number);
}

/*************************************/
/***    function Implementations  ****/
/*************************************/

int Get_Max(int Num1 , int Num2)
{
	
	if(Num1 > Num2)
		return Num1;
	else if(Num2 > Num1)
	return Num2;
	else
	{
	printf("two numbers are equals\n");
	return -1 ;
	}
	
}