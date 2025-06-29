/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec8_Ass2    
 * @version : 1.00  
 * @brief   : Write a C function to return the index of LAST occurrence of
 *            a number in a given array. Array index start from 0. If the item
 *            is not in the list return -1
 *            Example:
 *            Array = {1,2,3,4,4,4}
 *            The required number is 4 it should return 5
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/

/* protype of function */
int Last_index(int arr[] , int size , int Number);

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
		/* define integer */
	int Number , Last_index_In_Array=0;
	/* define an integer with 6 elements */
   int arr[6] = {1, 3, 6, 4, 4, 4};	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	Last_index_In_Array = Last_index(arr,6,Number);
	printf("The required number is %d it's index is %d \n",Number ,Last_index_In_Array );
}

int Last_index(int Copyarr[] , int Copysize , int CopyNumber)
{
		/* define integer variables */
	int Local_Count_I,Local_Flag =0 ,Local_Index ;
	
	
	/* we use this loop to search in all elements in the array */
	for(Local_Count_I = 0 ; Local_Count_I < 6 ; Local_Count_I++)
	{
		if(Copyarr[Local_Count_I]== CopyNumber)
		{
			/*we use Local_Flag varible to know if the number is in array or not */
			Local_Flag = 1 ;
			Local_Index = Local_Count_I;
			
		}else{
			;
		}
	}
	 /*we use Local_Flag to check if the number in array ,if it becomes 1 the number 
	 in the array if it still by 0 (the number is not in the array) */  
	if(Local_Flag == 1)
	{
		return Local_Index;
	}else{
		return -1;
	}
}