/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/


/* include standard input output library */
#include <stdio.h>


/* this is the prototype of the function Delete_element */
void Delete_element_In_Array(int* array , int size , int index);


/* this is the entry point of the program */
int main()
{
	/* define array to carry the variables which the user entered it */
	int arr[10];
	/* define the loop counter */
	int count;
	/* define variable which you want to delete it */
	int INDEX;
	/* this is the loop to enter 10 elements from the user */
	for(count = 0 ; count < 10 ; count++)
	{
		/* message to user */
		printf("please enter number %d:",count);
		/* take elements from the user */
		scanf("%d",&arr[count]);
	}
	/* message for the user */
	printf("please enter INDEX you want to delete it : ");
	/* index which the user wants to delete it */
	scanf("%d",&INDEX);
	/* call the function Delete_element_In_Array to delete the element at this index */
	Delete_element_In_Array(arr,10,INDEX);

	/* this is the loop to print 9 elements after the index deleted   */
	for(count = 0 ; count < 9 ; count++)
	{
		/* print elements */
		printf("%d\n",arr[count]);
	}
}


void Delete_element_In_Array(int* array , int size , int index)
{
	int  counter;
	/* check on the index if it valid or not */
	if((index >= 0) && (index < size))
	{
		/* this loop at the element which wants to overwrite on element at this index   */
		for(counter = index ; counter < size-1 ; counter++)
		{
			/*  overwrite on element at this index  */
			array[counter] = array[counter+1];
		}
	}else{
		/* message for user if the index is in valid */
		printf("wrong index element \n");
		
	}
	
}

