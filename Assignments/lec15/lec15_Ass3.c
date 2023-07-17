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
	uint32 hrs ;
	uint32 mins;
	uint32 secs;
	
}Time;



 /* funtion prototypes */
void Display_Struct(Time Print_Struct);
Time Dif_btw_2_period(Time period_1 , Time period_2 );


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* deefine objects from struct */
	Time Number_1 , Number_2 , Difference;
	/* ask the user to enter  the first Number_1.hrs */
	printf("please enter the first Number_1.hrs : ");
	/* take the value */
	scanf("%d",&Number_1.hrs);
	/* ask the user to enter  the first Number_1.mins */
	printf("please enter the first Number_1.mins : ");
	/* take the value */
	scanf("%d",&Number_1.mins);
	
	/* ask the user to enter  the first Number_1.secs */
	printf("please enter the first Number_1.secs : ");
	/* take the value */
	scanf("%d",&Number_1.secs);
		/* ask the user to enter  the first Number_2.hrs */
	printf("please enter the first Number_2.hrs : ");
	/* take the value */
	scanf("%d",&Number_2.hrs);
	/* ask the user to enter  the first Number_2.mins */
	printf("please enter the first Number_2.mins : ");
	/* take the value */
	scanf("%d",&Number_2.mins);
	
	/* ask the user to enter  the first Number_2.secs */
	printf("please enter the first Number_2.secs : ");
	/* take the value */
	scanf("%d",&Number_2.secs);
	/* call the function addComplexNumbers */
	Difference = Dif_btw_2_period(Number_1 , Number_2);
	/* call the function Display_Struct */
	Display_Struct(Difference);
}

/* this function for Display_Struct */
void Display_Struct(Time Print_Struct)
{
	printf("the difference between two periods is :  %d hrs : %d mins : %d secs \n",Print_Struct.hrs,Print_Struct.mins ,Print_Struct.secs);
	
}

/* this function for addComplexNumbers */
Time Dif_btw_2_period(Time period_1 , Time period_2 )
{
		/* deefine an object from struct */
    Time result;

   result.hrs = period_1.hrs - period_2.hrs;
   result.mins = period_1.mins - period_2.mins;
   result.secs = period_1.secs - period_2.secs;
    return result;
}



