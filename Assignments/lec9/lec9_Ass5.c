/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 9                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
int calcLengthOfString(const char *str);


/* 

   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main() {
    char str[] = "Hello, World!";
    int length = calcLengthOfString(str);
    
    printf("The length of the string is: %d\n", length);
    
    return 0;
}


/*find the length of a string */
   
   
int calcLengthOfString(const char *str) {
    int length = 0;
    
    while (*str != '\0') {
        length++;
        str++;
    }
    
    return length;
}


