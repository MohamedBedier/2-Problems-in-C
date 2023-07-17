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
	uint8 Name[20] ;
	uint32 ID;
	uint32 Grad;
	
}students;



 /* funtion prototypes */
void printStudents(students *ptr2);
void Store_Informations(students *ptr);


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* deefine objects from struct */
	students arr[10];
	Store_Informations(arr);
	printStudents(arr);
}

// Function to print student information
void printStudents(students *ptr2)
 {
	uint8 i;
    printf("Student Information:\n");
    for ( i = 0; i < 10; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", ptr2[i].Name);
        printf("ID: %d\n", ptr2[i].ID);
        printf("Grade: %d\n", ptr2[i].Grad);
        printf("\n");
    }
}

/* this function for  */
void Store_Informations(students *ptr)
{
	uint8 Count_I;
	for(Count_I =0 ; Count_I < 10 ; Count_I++)
	{
		printf("Enter information for Student %d:\n", Count_I + 1);
        
        printf("Name: ");
        scanf("%s", ptr[Count_I].Name);
        
        printf("ID: ");
        scanf("%d", &(ptr[Count_I].ID));
        
        printf("Grade: ");
        scanf("%d", &(ptr[Count_I].Grad));
        
        printf("\n");
	}
  
}



