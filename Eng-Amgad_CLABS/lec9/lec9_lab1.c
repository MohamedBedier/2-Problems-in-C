/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : selection sort          	                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/*Standard input _output library */

#include<stdio.h>


int main(void)
{
	int Count_I ,Count_J , Count_K , temp=0 ;
	
	int arr[6] = {3,1,2,9,9,9};

	for(Count_I = 0 ; Count_I < 6 ; Count_I++)
	{
		
		for(Count_J =Count_I + 1 ; Count_J < 6; Count_J++)
		{
			if( arr[Count_I] > arr[Count_J])
			{
				temp = arr[Count_J];
				arr[Count_J] = arr[Count_I];
				arr[Count_I] = temp;
				
			}
			
		}
		
	}
	
		printf("after sorting\n");
	for(Count_K = 0 ; Count_K < 6 ; Count_K++)
	{
		printf("%d\t",arr[Count_K]);
	}
	
}