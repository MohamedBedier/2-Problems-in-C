/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Break & Continue   				            **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/




/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 
 int counter= 0 ;
 
 while(counter < 10)
 {
	 counter++;
	 if(counter == 5)		 
	 continue;
	 
	printf("counter = %d \n",counter);
 }	 
 printf("The End");
 
}
