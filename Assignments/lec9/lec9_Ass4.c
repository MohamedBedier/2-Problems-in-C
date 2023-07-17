/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 9                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void func(char arr[] , int size);


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
	
	/* define an array of character  */
	char arr[] = "MOHAMED";	
	
	int Count_L , Count_K;
	
	/* calculate size of array */
	int size = sizeof(arr)/sizeof(arr[0]);
	
	/*print original array */
	for(Count_L = 0 ; Count_L < size ; Count_L++)
	{
		printf("%c",arr[Count_L]);
	}
	printf("\n");
	/* calling func */
	func(arr , size);
	
	
	/*print array after converting */
	printf("\n************\n");
	printf("print array after converting\n");
	
	for(Count_K = 0 ; Count_K < size ; Count_K++)
	{
		printf("%c",arr[Count_K]);
	}
}


/* given a string, converts all upper
   case letters to lowercase, leaving 
   the others unchanged */
   
   
void func(char arr[] , int size)
{
	   /* define integers */  
	int counter_I=0 ,counter_J=0 ;
	/* loop untill passing on all element of array */
	for(counter_I = 0 ; counter_I < size ; counter_I++)
	{
			/* ckeck on if element is capital alphabet or not  */
		if((arr[counter_I] >= 65 ) && (arr[counter_I] <= 90))
		{
			/* if element is capital alphabet convrt it to small alphabet */
				arr[counter_I] = arr[counter_I] + 32 ;
		}
	}
	
	
}