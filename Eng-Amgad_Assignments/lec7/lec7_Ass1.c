/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec7_Ass1    
 * @version : 1.00  
 * @brief   : Write a C program to print the index of FIRST occurrence of
 *            a number in an array. Array index start from 0. If the item is not
 *            in the list print -1.
 *            Example:
 *            Array = {1,2,3,4,4,4}
 *            The required number is 4 it should print 3
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/

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
	/* define integer variables */
	int Local_Num,Local_Count_I,Local_Flag =0 ;
	
	/* define the array */
	int arr[6] = {1 , 2 , 3 , 4 , 4, 4};
	
	/* Ask the user to enter the number which wanting to search on it in array */
	printf("please,enter the number which wanting to search on it in array : ");
	
	/* take the number from user */
	scanf("%d",&Local_Num);
	
	/* we use this loop to search in all elements in the array */
	for(Local_Count_I = 0 ; Local_Count_I < 6 ; Local_Count_I++)
	{
		if(arr[Local_Count_I]== Local_Num)
		{
			/*we use Local_Flag varible to know if the number is in array or not */
			Local_Flag = 1 ;
			break;
		}else{
			;
		}
	}
	 /*we use Local_Flag to check if the number in array ,if it becomes 1 the number 
	 in the array if it still by 0 (the number is not in the array) */  
	if(Local_Flag == 1)
	{
		printf("the index of the number is %d",Local_Count_I);
	}else{
		printf("the number is not in the arrahy -1 ");
	}
}