/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>

/* this is the entry point of the program */
int main()
{
	/* define variables */
	/* the variables are declered without initialized , now they have a garbage value  */
	int Number_1 , Number_2;
	
	/* this is a message for the user */
	printf("please enter the value of Number_1 :");
	
	/* take a value from the user */
	/* don't forget address operator (&) */
	scanf("%d",&Number_1);
	
	/* this is a message for the user */
	printf("please enter the value of Number_2 :");
	
	/* take a value from the user */
	/* don't forget address operator (&) */
	scanf("%d",&Number_2);
	
	/* print sumation value*/
	printf("a + b = %d\n",Number_1+Number_2);
	
	/* print multiplication value*/
	printf("a * b = %d\n",Number_1*Number_2);
	
	
}