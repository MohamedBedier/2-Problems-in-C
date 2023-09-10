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
	/* define Local variable */ 
	/* the variables are declered without initialized */
	int num ;
	int fact=1;

	/*  Ask the user to enter num  */
	printf("please Enter a number : ");
	
	/* take from the user to enter num */
	scanf("%d",&num);
	
	/* check if the num == 0 or not*/
while(num != 0)
{
	/* cal the fact */
	fact *=num;
	/* decrement num by 1 */
	num--;
}
/* print the fact */
	printf("factorial =%d",fact);
	
}