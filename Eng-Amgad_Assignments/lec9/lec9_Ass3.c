/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec9_Ass3    
 * @version : 1.00  
 * @brief   : write a C function that use the selection sorting
 *            algorithm to sort an integer array in ascending order
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/

/*Standard input _output library */

#include<stdio.h>


/* prototype of function */
void selection_sort(int arr[] , int size );

int main(void)
{
	
	
	int arr[6] = {3,9,2,0,4,1};
    int Count_K , Count_L;
	
		printf("before sorting\n");
	for(Count_L = 0 ; Count_L < 6 ; Count_L++)
	{
		printf("%d\t",arr[Count_L]);
	}
	
	selection_sort(arr , 6);
		printf("\n************\n");
		printf("after sorting\n");
	for(Count_K = 0 ; Count_K < 6 ; Count_K++)
	{
		printf("%d\t",arr[Count_K]);
	}
	
}

void selection_sort(int arr[] , int size )
{
	/* define variables */
	int Count_I ,Count_J , temp=0 , theSmallestElement ;
	
	
	/*to get the smallest element in array to loop one element by one element	*/
	for(Count_I = 0 ; Count_I < size -1 ; Count_I++)
	{ 
		
		theSmallestElement = Count_I;
		
	    /* get the smallest element in the array */
		for(Count_J =Count_I + 1 ; Count_J < size ; Count_J++)
		{
			if (arr[Count_J] < arr[theSmallestElement])
			{
				/* upadate the index of the smallest element */
				theSmallestElement = Count_J;
			}
		}
			 /* check if the smallest index equal the initial state of it */
			if( Count_I != theSmallestElement )
			{
				/* swap between to number */
				temp = arr[theSmallestElement];
				arr[theSmallestElement] = arr[Count_I];
				arr[Count_I] = temp;
				
			}
			
		}
}