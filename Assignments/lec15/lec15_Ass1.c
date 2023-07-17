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







/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define a struct */

typedef struct 
{
	uint8 name[20] ;
	uint8 roll[10];
	uint32 marks;
	
}student;
 
uint8 count_i ,count_j ;
	/* define an object from struct */
	student data;
	/* Assign values to the name, roll, and marks fields */
	data.name[0] = 'm';
	data.name[1] = 'o';
	data.name[2] = 'h';
	data.name[3] = 'a';
	data.name[4] = 'm';
	data.name[5] = 'e';
	data.name[6] = 'd';
	data.name[7] = '\0';

	data.roll[0] = 'm';
	data.roll[1] = 'a';
	data.roll[2] = 't';
	data.roll[3] = 'h';
	data.roll[4] = '\0';

	data.marks = 150;
	
	/* print the name of student */
	printf("student name is : ");
	for(count_i = 0 ; data.name[count_i] != '\0' ; count_i++)
		{
			printf("%c",data.name[count_i]);
		}
		
	printf("\n********\n");
	/* print the roll of student */
		printf("student roll is : ");
	for(count_j = 0 ; data.roll[count_j] != '\0' ; count_j++)
		{
			printf("%c",data.roll[count_j]);
		}
	printf("\n********\n");
		/* print the marks of student */
		printf("student marks is : ");
	printf("student marks is :%d\n",data.marks);
	
}