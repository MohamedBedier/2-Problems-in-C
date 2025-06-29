/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec5_Ass3    
 * @version : 1.00  
 * @brief   : write a C Function that display Prime Numbers between
 *            Intervals (two numbers).
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/



/* prototype of function */
void GetPrimeBtwTwoNum(int CopyNum1,int CopyNum2);
void IsPrime(int CopyNum1);

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */


int main()
{
	/* define integers to carry numbers */
	int Local_num1 , Local_num2; 
	/* Ask user to enter num1 */
	printf("please enter num1 : ");
	/* take num1 from user */
	scanf("%d",&Local_num1);
	/* Ask user to enter num1 */
	printf("please enter num2 : ");
	/* take num1 from user */
	scanf("%d",&Local_num2);
	/* pass Arguments By value */
	GetPrimeBtwTwoNum(Local_num1 , Local_num2);
	
	
	
	
}
void IsPrime(int CopyNum1)
{
	/* define two counters */
	int Local_Counter_I ,Local_Counter_J=1;
	/* loop to divid number on all previous number and itself */
	for(Local_Counter_I = 2 ; Local_Counter_I <= CopyNum1 ; Local_Counter_I++)
	{
		/* check of only accept divided on itself or not */
		if(CopyNum1 % Local_Counter_I == 0)
		{
			/* update counter by 1 */
			Local_Counter_J++;
		}
	}
	
	/* check of prime or not */
	if(Local_Counter_J == 2 )
	{
		printf("%d \n",CopyNum1);
	}
	
}


void GetPrimeBtwTwoNum(int CopyNum1,int CopyNum2)
{
	int LocaL_Count_I;
	for(LocaL_Count_I =CopyNum1 ; LocaL_Count_I <= CopyNum2 ;LocaL_Count_I++)
	{
		IsPrime(LocaL_Count_I);
		
	}
	
}