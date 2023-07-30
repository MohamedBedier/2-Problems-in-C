/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Escape sequence character                   **/
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

/* The math.h library in C is a standard library 
that provides various mathematical functions and constants */


#include <math.h>
/* this is the main function (the program start from here)*/
/* Every program must have only one main function  */

int main(void)
{
	float radius , Area_of_Circle , circumference_Of_Circle ;
	/* Ask user to enter the value of radius */
	printf("please ente the radius of circle : ");
	/* take the value of radius */
	scanf("%f",&radius);
	
	/* calculates the area of circle */
	/* Note that we use the function of 
       pow(x, y)to Return x raised to the power of y.
		and we use const M_PI  */	
	Area_of_Circle = M_PI * pow(radius , 2) ;
	
	/* print Area_of_Circle */
	printf("Area_of_Circle is : %0.4f \n",Area_of_Circle);
	/* calculates the circumference of circle  */
	circumference_Of_Circle = 2.0 *M_PI *radius ;
	/* print circumference_Of_Circle */
	printf("circumference_Of_Circle is : %0.4f \n",circumference_Of_Circle);
	
}