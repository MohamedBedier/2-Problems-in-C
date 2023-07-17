/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 7                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void Count_ones(int Number);

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
	/* define integers varibles  */
	int First_Number , Dif_Number, Req_Number ,Result ;
	
	/* Ask the user to enter the First_Number */
	printf("please,enter the First_Number: ");
	/* take the First_Number from user */
	scanf("%d",&First_Number);
	/* Ask the user to enter the First_Number */
	printf("please,enter the Req_Number: ");
	/* take the Req_Number from user */
	scanf("%d",&Req_Number);
	/* Ask the user to enter the Diference between two num in series */
	printf("please,enter the Dif_Number: ");
	/* take the Diference between two nums in series from user */
	scanf("%d",&Dif_Number);
	
	/* equation */
	Result = First_Number + Dif_Number * (Req_Number - 1);
	printf("%d",Result);
	
}