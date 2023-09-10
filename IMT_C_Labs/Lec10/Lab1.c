/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_C_LABS                	                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/*Standard input _output library */

#include<stdio.h>
#include<stdlib.h>

/* prototype of function */
void Buble_sort(int arr[] , int size );

int main(void)
{
	/* define variable to carry the number of numbers in the block */
	int n;
	/* define the loop counters */
	int count,Count_K;
	
	/* message for user */
	printf("please enter the number of numbers : ");
	scanf("%d",&n);
	
	/* create the block using malloc func (dynamic memory allocation) and assign it into pointer from int type */
	/* malloc return (void*) we can cast it into pointer from any datatype  */
	int* ptr = (int*)malloc(n*sizeof(int));


	/* this is the loop to enter 10 elements from the user */
	for(count = 0 ; count < n ; count++)
	{
		/* message for user */
		printf("please enter number %d:",count+1);
		/* take elements from the user */
		scanf("%d",&ptr[count]);
	}
		/* call Buble_sort func*/
		Buble_sort(ptr , n);
		
		/* message for user */
		printf("\n************\n");
		
		/* message for user */
		printf("after sorting\n");
		
		/* this loop to reprint the block */
	for(Count_K = 0 ; Count_K < n ; Count_K++)
	{
		/* print the block */
		printf("%d\n",ptr[Count_K]);
	}
	
}

/* buble sort implementation */
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
				/* swap between two number */
				sorting_done=0;
				temp = arr[Count_J+1];
				arr[Count_J+1] = arr[Count_J];
				arr[Count_J] = temp;
				
				
			}
			
		}
		if (sorting_done== 1)break;// array sorted
	}
}