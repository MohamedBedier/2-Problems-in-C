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
	/* define variable with initionalization by 10 */
	int x=10;
	int* ptr=&x;
	/* message for the user */
	printf("x before change is : %d\n",x);
	
	/* change the value of x by pointer */
	*ptr = 20; 
	
	/* message for the user */
	printf("x after change is : %d\n",x);

}