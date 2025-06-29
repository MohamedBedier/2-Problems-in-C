/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 8                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/
void reverse_array(int arr_one[] , int size);



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
	/* define two arries  */
	int arr_one[5] = {1,2,3,4,5};
	int arr_two[5] = {6,7,8,9,10};
	/* define two integer varibles */
	int count_I  ;
	/* print arr_one before reverse  */
			printf("arr_one before reverse is : \n");

		for(count_I =0 ; count_I<5 ; count_I++)
		{
			printf("%d\t",arr_one[count_I]);
		}
		printf("\n********************\n");
		
		/* calling function */
		reverse_array(arr_one , 5 );
		
	
}

void reverse_array(int arr_one[] , int size)
{
	/* define integer varibles */
	int temp , count_K , count_I ,count_J  ; 
		printf("arr_one after reverse is : \n");
		for(count_K = 4 ;count_K >= 0 ;count_K--)
		{
			printf("%d\t",arr_one[count_K]);

		}
		
}