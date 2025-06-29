/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec9_Ass8    
 * @version : 1.00  
 * @brief   : Write a function to concatenate two strings.
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/



/* protype of function */
void concatenate_two_strings(char *ptr ,char *ptr2);


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
	
	/* define an array of character  */
	char arr[] = "mohamed";	
	char arr_2[] = "Bedier";
	
	/* calling concatenate_two_strings */
	
	concatenate_two_strings(arr , arr_2);
	
	
}
 
void concatenate_two_strings(char *ptr ,char *ptr2)
{
	/* Assuming a maximum length of 100 for the resulting string */
		 static char result[100] , count_l=0; 
		 int i,j,k;
	/* loop untill passing on all element of array */
	    for (i = 0; ptr[i] != '\0'; i++)
		{
			result[i]=ptr[i];
			count_l++;
		}
		/* concatenate the other string */
		for(j = count_l , k=0; ptr2[k] != '\0'; j++,k++) 
		{
			result[j]=ptr2[k];
		}
	
	result[j+1] = '\0';
	/* print the array after concatenate_two_strings */
	printf("%s\n", result);
}