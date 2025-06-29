/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 9            	                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/*Standard input _output library */

#include<stdio.h>


/* prototype of function */
void selection_sort(int arr[] , int size );

int main(void)
{
	
	
	int arr[6] = {3,1,2,9,9,9};
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
	int Count_I ,Count_J , temp=0 ;
	
	
	/*to get the smallest element in array to loop one element by one element	*/
	for(Count_I = 0 ; Count_I < size -1 ; Count_I++)
	{ 
		/* to get the smallest element in array */
		for(Count_J =Count_I + 1 ; Count_J < size ; Count_J++)
		{
			
			if( arr[Count_I] > arr[Count_J])
			{
				/* swap between to number */
				
				temp = arr[Count_J];
				arr[Count_J] = arr[Count_I];
				arr[Count_I] = temp;
				
			}
			
		}
		
	}
}