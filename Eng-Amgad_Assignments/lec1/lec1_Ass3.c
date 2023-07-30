/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 3			                    **/
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


/* this is the main function (the program start from here)*/
/* Every program must have only one main function  */

int main(void)
{
	/* define two variables */
	float temp_c ;
	float Resylt_Temp_F = 0 ;
	
	/* Ask user to enter the value of temp_c */
	printf("please enter the value of temp_c : ");
	/* take the value temp_c from user */
	scanf("%f",&temp_c);
	/* converting temperature from degrees Celsius to degrees Fahrenheit */
	/* we use explict casting */
	Resylt_Temp_F =temp_c * ((float)9/(float)5) + (float)32 ;
	/* print Resylt_Temp_F */
	printf("Resylt_Temp_F is %0.4f",Resylt_Temp_F);
	
}
	