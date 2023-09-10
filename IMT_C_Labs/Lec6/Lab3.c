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
void Pass_By_Reference(int* value1, int* value2,int* sumation , int* subtraction);

/* this is the entry point of the program */
int main()
{
	/* define variables */
	int num1,num2;
	int sum,sub;
	
	/* ask the user to enter num1 */
	printf("please enter num1: ");
	/* take num1 from user */
	scanf("%d",&num1);
	
	/* ask the user to enter num2 */
	printf("please enter num2: ");
	/* take num2 from user */
	scanf("%d",&num2);

	/* call the func and pass arguments by reference */
	Pass_By_Reference(&num1,&num2,&sum,&sub);
	
	/* print the result sumation */
	printf("the result of sumation is : %d\n",sum);
	
	/* print the result subtraction */
	printf("the result of subtraction is : %d\n",sub);	
	
}


/* the implementation of Pass_By_Reference function */
void Pass_By_Reference(int* value1, int* value2,int* sumation , int* subtraction)
{
		/* calculate the sum */
	*sumation = *value1 + *value2 ;
	
	/* calculate the sub */
	*subtraction = *value1 - *value2 ;
}