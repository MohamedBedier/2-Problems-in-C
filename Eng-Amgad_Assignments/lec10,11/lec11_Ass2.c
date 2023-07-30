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
int Length_of_array(char *ptr);


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
	
	/* define an array of integers */
	char array[] = "mohamedbedier";
	/* define a variable */
	int Result=0;
	/* calling Length_of_array function */
	Result=Length_of_array(array );
	/* print the result of Length_of_array */
	printf("Length_of_array  is %d\n",Result);
	
}
 
int Length_of_array(char *ptr )
{
	/* define a variables */
		int  Length=0; 
		 while (*ptr != '\0') {
        Length++;
        ptr++;
    }
    
    return Length;
}