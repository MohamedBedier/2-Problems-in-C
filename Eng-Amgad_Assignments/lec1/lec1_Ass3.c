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
	/* define a variable to carry Celsius degree from user */
	float Local_CelsiusDegree;
	/* define a variable to carry Fahrenheit Degree */
	float Local_FahrenheitDegree = 0;
	
	/* ask the user to enter Celsius degree */
	printf("please,Enter Celsius degree : ");
	scanf("%0.1f",&Local_CelsiusDegree);
	
	/* converting temperature from degrees Celsius to degrees Fahrenheit */
	/* we use explict casting */
		Local_FahrenheitDegree =  Local_CelsiusDegree * ((float)9/(float)5) + (float)32;
	
	/* print the Fahrenheit Degree */
	printf("Fahrenheit Degree is : %0.2f",Local_FahrenheitDegree);
	
}
	