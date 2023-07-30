/************************************************************************/
/************************************************************************/
/**                                                                    **/
/** File Name : ask user to get factorial of a given number            **/             
/** Auther    : MOHAMED BEDIER MOHAMED                                 **/
/** Verision :  1.00                                                   **/
/**                                                                    **/
/************************************************************************/
/************************************************************************/




/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 
  int Number , fact=1 ;
 
 /* Ask user to enter number :  */
	printf("please enter Number : ");
	
	/* take The Number from user */
	scanf("%d",&Number);
	

	/* check condition */
	do{
		fact *= Number ;
		Number --;
		
	}while(Number != 0);
	printf("factorial of Number is :%d " , fact);
}