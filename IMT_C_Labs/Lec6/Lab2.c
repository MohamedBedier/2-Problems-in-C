/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/


/* include standard input output library */
#include <stdio.h>

/* the prototype of Pass_By_Reference function */
int Pass_By_Reference(int* value1, int* value2);


/* this is the entry point of the program */
int main()
{
	/* define variables */
	int num1,num2,sum;
	
	/* ask the user to enter num1 */
	printf("please enter num1: ");
	/* take num1 from user */
	scanf("%d",&num1);
	
	/* ask the user to enter num2 */
	printf("please enter num2: ");
	/* take num2 from user */
	scanf("%d",&num2);

	/* call the func and pass arguments by reference */
	sum =Pass_By_Reference(&num1,&num2);
	
	/* print the result of num1 and num2 */
	printf("the result is : %d\n",sum);
}

/* the implementation of Pass_By_Reference function */
int Pass_By_Reference(int* value1, int* value2)
{
	/* return the sum of num1 and num2 */
	return (*value1 + *value2);
}