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
void CutReverseTheLast2characters(char *ptr);


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
	char array[10]="mohamed";
	
	/* calling CutReverseTheLast2characters function */
	CutReverseTheLast2characters(array);

}
 
void CutReverseTheLast2characters(char *ptr)
{
	/* define a variables */
		int count_l=0 ,count_i=-1;
		
	/* loop untill passing on all element of array */
	    for (count_l = 0; ptr[count_l] != '\0' ; count_l++)
		{
			count_i++;
		}
		
		printf("%c %c",ptr[count_i] , ptr[count_i - 1 ]);
		
}