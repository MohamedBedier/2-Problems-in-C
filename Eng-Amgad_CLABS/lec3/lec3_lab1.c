/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : lec3_lab1                                   **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/



/*************************************************************/
/*************************************************************/
/**                                                         **/
/**  lab1 : multiply number by 9 without using * &          **/
/**         without adding number 9 times                   **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

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
	/* define two integers   */
	int Number ;
	/* Ask Number from user  */
	printf("please enter number : ");
	
	/* take Number from user */ 
	scanf("%d",&Number);
	
	Number = (Number << 3 ) + Number ; 
	
	printf("New Number : %d \n",Number );
	


}