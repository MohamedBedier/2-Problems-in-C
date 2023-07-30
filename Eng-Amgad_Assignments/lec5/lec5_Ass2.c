/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 5                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>




/* prototype of function */

int cal_function(int num1 , int num2 ,char operation);


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main()
{
	int num1,num2, result;
	char operation;
	
	/* Ask user to enter num1 */
	printf("please enter num1 : ");
	/* take num1 from user */
	scanf("%d",&num1);
	/* Ask user to enter num2*/
	printf("please enter num2 : ");
	/* take num2 from user */
	scanf("%d",&num2);
	/* Ask user to enter operation*/
	printf("please enter operation : ");
	/* take operation from user */
	scanf(" %c",&operation);
	/* calling function */
	result = cal_function(num1,num2,operation);
	printf("result is %d\n",result);
}

int cal_function(int num1 , int num2 ,char operation)
{
	switch(operation)
	{
		case '+' :return (num1+num2);break;
		case '-' :return (num1-num2);break;
		case '*' :return (num1*num2);break;
		case '/' :return (num1/num2);break;
		default:printf("error\n");
	}
	
}