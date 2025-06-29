/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec9_Ass2    
 * @version : 1.00  
 * @brief   : Write a C function that use the bubble sorting algorithm
 *            to sort an integer array in descending order
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/

/*Standard input _output library */

#include<stdio.h>


/* prototype of function */
void Buble_sort(int arr[] , int size );

int main(void)
{
	
	
	int arr[6] = {6,22,1,3,2,9};
    int Count_K , Count_L;
	
		printf("before sorting\n");
	for(Count_L = 0 ; Count_L < 6 ; Count_L++)
	{
		printf("%d\t",arr[Count_L]);
	}
	
	Buble_sort(arr , 6);
		printf("\n************\n");
		printf("after sorting\n");
	for(Count_K = 0 ; Count_K < 6 ; Count_K++)
	{
		printf("%d\t",arr[Count_K]);
	}
	
}

void Buble_sort(int arr[] , int size )
{
	/* define variables */
	int Count_I ,Count_J , temp=0 ;
	char sorting_done=1;
	
	/*to get the smallest element in array to loop one element by one element	*/
	for(Count_I = 0 ; Count_I < size -1 ; Count_I++)
	{ 
		sorting_done=1;
		/* to get the smallest element in array */
		for(Count_J =0 ; Count_J < size-1-Count_I ; Count_J++)
		{
			
			if( arr[Count_J] > arr[Count_J+1])
			{
				/* swap between to number */
				sorting_done=0;
				temp = arr[Count_J+1];
				arr[Count_J+1] = arr[Count_J];
				arr[Count_J] = temp;
				
				
			}
			
		}
		if (sorting_done== 1)break;// array sorted
	}
}