/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 15                               **/
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
#include "STD_TYPES.h"

/* define a struct */

typedef struct 
{
	uint32 Real_part ;
	uint32 Complex_part;
	
}Complex_Number;



 /* funtion prototypes */
void Display_Struct(Complex_Number Print_Struct);
Complex_Number addComplexNumbers(Complex_Number Num_1 , Complex_Number Num_2 );


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* deefine objects from struct */
	Complex_Number Number_1 , Number_2 , Sum;
	/* ask the user to enter  the first Number_1.Real_part */
	printf("please enter the first Number_1.Real_part : ");
	/* take the value */
	scanf("%d",&Number_1.Real_part);
	/* ask the user to enter  the first Number_2.Real_part */
	printf("please enter the first Number_2.Real_part : ");
	/* take the value */
	scanf("%d",&Number_2.Real_part);
	
	/* ask the user to enter  the first Number_1.Complex_part */
	printf("please enter the first Number_1.Complex_part : ");
	/* take the value */
	scanf("%d",&Number_1.Complex_part);
	/* ask the user to enter  the first Number_2.Real_part */
	printf("please enter the first Number_2.Complex_part : ");
	/* take the value */
	scanf("%d",&Number_2.Complex_part);	


	/* call the function addComplexNumbers */
	Sum = addComplexNumbers(Number_1 , Number_2);
	/* call the function Display_Struct */
	Display_Struct(Sum);
}

/* this function for Display_Struct */
void Display_Struct(Complex_Number Print_Struct)
{
	printf("the result of two Complex_Numbers is  %d + %di \n",Print_Struct.Real_part,Print_Struct.Complex_part);
	
}

/* this function for addComplexNumbers */
Complex_Number addComplexNumbers(Complex_Number num1, Complex_Number num2)
{
		/* deefine an object from struct */
    Complex_Number result;

    result.Real_part = num1.Real_part + num2.Real_part;
    result.Complex_part = num1.Complex_part + num2.Complex_part;

    return result;
}



