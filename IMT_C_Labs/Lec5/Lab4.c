/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/


/* include standard input output library */
#include <stdio.h>

/* prototype of function Selection_sort */
void Selection_sort(int arr[] , int size_Of_Arr);

/* this is the entry point of the program */
int main()
{
	/* define array to carry the variables which the user entered it */
	int arr[10];
	/* define the loop counter */
	int count;

	/* this is the loop to enter 10 elements from the user */
	for(count = 0 ; count < 10 ; count++)
	{
		/* message to user */
		printf("please enter number %d:",count);
		/* take elements from the user */
		scanf("%d",&arr[count]);
	}
	
	Selection_sort(arr,10);
	
	/* this is the loop to print 10 elements after sorted by selection sorted algorithm */
	for(count = 0 ; count < 10 ; count++)
	{
		/* print elements */
		printf("%d\n",arr[count]);
	}
}

/* implementation of function Selection_sort */
void Selection_sort(int arr[] , int size_Of_Arr)
{
	/* define variables */
	int Min_Index,Counter_I,Counter_J,Temp;
	
	/* this loop to sort the array note that 
	   if we arrived to the index size_Of_Arr -1
	   the array is come sorted we are not need to make the last operation */
	   
	for(Counter_I =  0 ; Counter_I < size_Of_Arr -1 ;Counter_I++)
	{
		/* all the make the min index to catch the element which have the incoming operation to sort*/
		Min_Index = Counter_I;
		
		/* this loop to looping on all the remaining elements on array */
		for(Counter_J = Counter_I+1 ; Counter_J < size_Of_Arr ;Counter_J++)
		{
			/* if we catch an element is smaller than the element at Min_Index */ 
			   
			if(arr[Counter_J] < arr[Min_Index])
			{
				/*  make the Min_Index refer to it */ 
				 Min_Index = Counter_J;
			}
		}
		
		/* check on Min_Index is changed or not */
		if(Counter_I != Min_Index)
		{
			/* if it changed swap between two elements */
			Temp=arr[Counter_I];
			arr[Counter_I] = arr[Min_Index];
			arr[Min_Index] = Temp;
		}
	}
}