/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec1_Ass4    
 * @version : 1.00  
 * @brief   : calculates the area and Circumference of circle
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                  
 *                                                       
 ************************************************************
 ************************************************************/

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/* Standard input _output library */
#include<stdio.h>
#include<math.h>

/* this is the entry point of the program (the program start from here) 
    Every program must have only one main function  */

int main(void)
{
	/* define a variable to carry radius of a circle from user */
	float Local_Radius;
	/* define Two variables to carry Area Of Circle and Circumference Of Circle */
	float Local_AreaOfCircle;
	float Local_CircumferenceOfCircle;
	
	
	/* ask the user to enter radius of a circle */
	printf("please,Enter radius Of Circle : ");
	scanf("%f",&Local_Radius);
	
	/* calculates the area of circle from this equation */
	/* Note that we use the function of pow(x, y)to Return x raised to the power of y.
		and we use const M_PI  */	
		Local_AreaOfCircle =  M_PI * (float)pow(Local_Radius ,2);
		
		/* calculate the Circumference Of Circle from this equation */
		Local_CircumferenceOfCircle = 2.0 * M_PI * Local_Radius;
		
	/* print the Area Of Circle */
	printf("Area Of Circle is : %0.4f\n",Local_AreaOfCircle);
	/* print the Circumference Of Circle */
	printf("Circumference Of Circle is : %0.4f\n",Local_CircumferenceOfCircle);
	
}