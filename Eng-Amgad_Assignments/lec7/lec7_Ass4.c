/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec7_Ass1    
 * @version : 1.00  
 * @brief   : The sequence of numbers 1, 1, 2, 3, 5, 8, 13, … is called
 *            Fibonacci numbers, each is the sum of the preceding 2.
 *            Write a program which given n, returns the nth Fibonacci
 *            number.
 *            - with for/while
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/


/* protype of function */
void FibonacciFuncByForLoop(int array[],int size);
void FibonacciFuncByWhileLoop(int array[],int size);

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
	/*define the array size */
	int size;
	
	printf("please enter the n element : ");
	
	scanf("%d",&size);
	/* define an integer array */
	int array[size];
	
	//FibonacciFuncByForLoop(array,size);
	FibonacciFuncByWhileLoop(array,size);
}


void FibonacciFuncByForLoop(int array[],int size)
{
	/* define interger variables */
	int Local_nth_Num,Local_Count_I;

	/* this loop the create Fibonacci series */
	for(Local_Count_I = 0 ; Local_Count_I < size ; Local_Count_I++)
	{
		
		if(Local_Count_I == 0)
		{
			array[Local_Count_I] = 1;/* first element */
		}else if(Local_Count_I == 1)
		{
			array[Local_Count_I] = 1;/* 2nd element */
		}else if(Local_Count_I > 1)
		{
			array[Local_Count_I] = array[Local_Count_I -1] + array[Local_Count_I-2]; /* the other elements in series */
		}
	}
	Local_nth_Num = array[size -1];/* get the nth element */
	printf("the n th number is : %d",Local_nth_Num);/* print the nth element */

}


void FibonacciFuncByWhileLoop(int array[],int size)
{
	/* define interger variables */
	int Local_nth_Num,Local_Count_I=0;

	/* this loop the create Fibonacci series */
	while( Local_Count_I < size )
	{
		
		if(Local_Count_I == 0)
		{
			array[Local_Count_I] = 1;/* first element */
			Local_Count_I++;
		}else if(Local_Count_I == 1)
		{
			array[Local_Count_I] = 1;/* 2nd element */
			Local_Count_I++;
		}else if(Local_Count_I > 1)
		{
			array[Local_Count_I] = array[Local_Count_I -1] + array[Local_Count_I-2]; /* the other elements in series */
		Local_Count_I++;
		}
	}
	Local_nth_Num = array[size -1];/* get the nth element */
	printf("the n th number is : %d",Local_nth_Num);/* print the nth element */

}
