/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Array           				            **/
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
  /* define array & its size */
   int arr[10] , i , sum = 0;
   float avg ;
   for(i = 0 ; i < 10 ; i++)
   {
	   
	  /* Ask userto enter array element */
	 printf("please enter array element : ");
	 scanf("%d",&arr[i]);
	 sum +=arr[i] ;
   }
   printf("sum of array elements = %d\n",sum);
   avg = (float)sum / 10.0 ;
  printf("avg of array elements = %f\n",avg);
} 
