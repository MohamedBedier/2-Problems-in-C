/*************************************************************/
/****************************************************************/
/**                                                            **/
/** File Name : ask user to enter 10 no &find sum& avg of them **/             
/** Auther    : MOHAMED BEDIER MOHAMED                         **/
/** Verision :  1.00                                           **/
/**                                                            **/
/****************************************************************/
/****************************************************************/




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
 
 int counter , Number , sum =0  ;
 float avg ;

 /* using for loop */
 for(counter = 0 ; counter < 10 ; counter++ )
 {
	  /* Ask user to enter number */
 printf("please enter number : ");
 
 /* take the number from user */
 scanf("%d",&Number);
 
	 sum += Number;
	 
 }
 printf("sum of 10 Numbers is %d\n",sum);
 avg=(float)sum/10.0;
 printf("avg of 10 Numbers is %f\n",avg);
}