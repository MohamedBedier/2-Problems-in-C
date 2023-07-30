/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 11                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void concatenate_two_strings(char *ptr ,char *ptr2);


/* 

   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>
/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 11                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void Swap_between_two_arrays(char *ptr_Arr1 , char *ptr_Arr2 );


/* 

   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	
	/* define 2 array of characters */
	char array_1[20]="mohamedBedier";
	char array_2[20]="shadyBedier";
	int count_I , count_J;
	printf("array_1 before swaping \n");
	for(count_I = 0 ; array_1[count_I] != '\0' ;count_I++)
	{
		printf("%c",array_1[count_I]);
	}
	printf("\n********\n");
		printf("array_2 before swaping \n");
	for(count_J = 0 ; array_2[count_J] != '\0' ;count_J++)
	{
		printf("%c",array_2[count_J]);
	}
	printf("\n********\n");
	/* calling Swap_between_two_arrays function */
	Swap_between_two_arrays(array_1, array_2 );
	printf("array_1 after swaping \n");
	for(count_I = 0 ; array_1[count_I] != '\0' ;count_I++)
	{
		printf("%c",array_1[count_I]);
	}
	printf("\n********\n");
		printf("array_2 after swaping \n");
	for(count_J = 0 ; array_2[count_J] != '\0' ;count_J++)
	{
		printf("%c",array_2[count_J]);
	}
	
}
 
void Swap_between_two_arrays(char *ptr_Arr1 , char *ptr_Arr2 )
{
	/* define an array for swaping */
	char arr_for_swaping[20];
	/* define a variable */
		int count_l=0 ;
		
	/* loop untill passing on all element of array */
	    for (count_l = 0; ptr_Arr1[count_l] != '\0' ; count_l++)
		{
			/* Swap_between_two_arrays */
			arr_for_swaping[count_l] = ptr_Arr1[count_l];
			ptr_Arr1[count_l] = ptr_Arr2[count_l];
			ptr_Arr2[count_l] = arr_for_swaping[count_l];
		}
		
}

