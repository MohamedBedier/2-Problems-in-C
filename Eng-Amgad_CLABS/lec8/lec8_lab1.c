/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Array with limit user                       **/
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
 
 /*Standard input _output library */

#include<stdio.h>



/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
  /* define array & its size */
   char arr[20] ;
     float avg ;
 
	   
	  /* Ask user to enter array element */
	 printf("please enter 19  element without spaces , tabs : ");
	 scanf("%19s",arr);
	
  
   printf("array elements = %19s",arr);
 
} 
