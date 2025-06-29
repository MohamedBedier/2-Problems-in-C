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
	char arr[] = "mohamed";	
	/* calculate size of array */
	int size = sizeof(arr)/sizeof(arr[0]);
	/* calling func */
	func(arr , size);
	
	
}


/* given a string, return TRUE if all 
   characters are distinct and FALSE 
   if any character is repeated  */
   
   
   /* this func is sensative between capital alphabet and small alphabet */
void func(char arr[] , int size)
{
	   /* define integers */  
	int counter_I=0 ,counter_J=0 ;
	/* loop untill passing on all element of array */
	for(counter_I = 0 ; counter_I < size ; counter_I++)
	{
			/* ckeck on if element one in arr repeated or not  */
		if(arr[0] == arr[counter_I+1] )
		{
			/* repeated counter increment by 1 */
				counter_J++;
		}
	}
	  /* check on counter_J if incremented by 1  repeated & return TRUE */
	if(counter_J == 1)
	{
		printf("TRUE\n");
	}else{
		/* check on counter_J if not incremented by 1  not repeated & return FALSE */
		printf("FALSE\n");
	}
	
}