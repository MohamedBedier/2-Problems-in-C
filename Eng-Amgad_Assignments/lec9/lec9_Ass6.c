/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 9                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of functions */
 void remove_non_alphabets(char *string);


/* 

   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>
#include<ctype.h>

/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	
	/* define an array of character  */
	char arr[] = ")(%$moha&m/e@d";	
	/* define counter */
	int count_k;
	
	/* calling function remove_non_alphabets */
	
	remove_non_alphabets(arr);// passing the array
	
		/* print the array after removing all special character */
	for(count_k= 0 ; arr[count_k] != '\0' ; count_k++) // conditional 
	{
		printf("%c",arr[count_k]);
	}
	
}

	

   


 void remove_non_alphabets(char *string)
 {
	/* Assuming a maximum length of 100 for the resulting string */
    char result[100]; 
	
    int i, j = 0;
    
    for (i = 0; string[i] != '\0'; i++) 
	{
		/* this is a function check if the character is alphabet or not */
        if (isalpha(string[i]))
		{
			/* j++ because j= 0  */
            result[j++] = string[i];
        }
    }
    /* put the last element '\0' */
    result[j] = '\0';
    
    /* Copy the result back to the original string */
    for (i = 0; result[i] != '\0'; i++)
	{
        string[i] = result[i];
    }
    
    string[i] = '\0';
}


