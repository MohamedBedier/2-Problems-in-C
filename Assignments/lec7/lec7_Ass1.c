/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 7                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

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
	/* define integer variables */
	int counter  , Number , check =0 ;
	
	int arr[6] = {1 , 2 , 3 , 4 , 4, 4};
	
	/* Ask the user to enter the number which wanting to search on it in array */
	printf("please,enter the number which wanting to search on it in array : ");
	/* take the number from user */
	scanf("%d",&Number);
	for(counter = 0 ; counter < 6 ; counter++)
	{
		if(arr[counter]== Number)
		{
			printf("%d\n",counter);
			/*we use check varible to know if the numberin array it becomes 1 if not still 0 */
			check++;
			break;
		}
	}
	 /*we use check varible to know if the numberin array it becomes 1 if not still 0 */  
	if(check == 1)
	{
		;
	}else
	{
		printf(" -1 \n");
	}
}