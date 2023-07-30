/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : algorithm               	                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/*Standard input _output library */

#include<stdio.h>


	/* protype of functions  */
void Buble_sort(int arr[] , int size );
void Add_element_In_Array(int arr[] , int size , int value ,int position );


int main(void)
{
	int Count_I ,Count_J ,Count_L, Count_K , temp=0 ;
	
	int arr[6] = {10,3,9,8};

		/*  print array before sorting  */
		printf("before sorting\n");
		for(Count_L = 0 ; Count_L < 6 ; Count_L++)
		{
			printf("%d\t",arr[Count_L]);
		}
	
	/* sorting rhe array ascending */
		Buble_sort(arr , 6);
		
		printf("\n************\n");
		/*  print array after sorting  */
		printf("after sorting\n");
		for(Count_K = 0 ; Count_K < 6 ; Count_K++)
		{
			printf("%d\t",arr[Count_K]);
		}
	
	printf("\n************\n");
	
	Add_element_In_Array(arr,6,7,3);
	Add_element_In_Array(arr,6,6,4);
		printf("\n************\n");
		
		/*  print array after adding value  */
		printf("after  adding value\n");
		for(Count_K = 0 ; Count_K < 6 ; Count_K++)
		{
			printf("%d\t",arr[Count_K]);
		}
}



void Buble_sort(int arr[] , int size )
{
	/* define variables */
	int Count_I ,Count_J , temp=0 ;
	
	
	/*to get the smallest element in array to loop one element by one element	*/
	for(Count_I = 0 ; Count_I < size -1 ; Count_I++)
	{ 
		/* to get the smallest element in array */
		for(Count_J =0 ; Count_J < size-1 ; Count_J++)
		{
			
			if( arr[Count_J] < arr[Count_J+1])
			{
				/* swap between to number */
				
				temp = arr[Count_J+1];
				arr[Count_J+1] = arr[Count_J];
				arr[Count_J] = temp;
				
				
			}
			
		}
		
	}
}


void Add_element_In_Array(int arr[] , int size , int value ,int position )
{
	int Count_I ,Count_J ,temp=0 , X_value ,X_temp;
	for(Count_I = size-1 ; Count_I > position ; Count_I--)
	{
		
				temp = arr[Count_I];
				arr[Count_I] = arr[Count_I-1];
				arr[Count_I-1] = temp;
		
	}
			arr[position] = value ;
	
}
