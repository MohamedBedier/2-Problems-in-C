/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>

	/* define global variable */ 
	/* the variables are declered without initialized */
	int num1;
	int num2;


/* this is the prototype of the function Get_Max  */
void swap(int* num1 , int* num2);


/* this is the entry point of the program */
int main()
{

	/* ask the user to enter num1 */
	printf("Enter the num1 : ");
	
	/* take the num1 from user */
	scanf("%d",&num1);
	/* ask the user to enter num2 */
	printf("Enter the num2 : ");	
	/* take the num2 from user */
	scanf("%d",&num2);
	
	/* print num1 befor swap */
	printf("num1 befor swap =%d\n",num1);
		/* print num2 befor swap */
	printf("num2 befor swap =%d\n",num2);
	
	/* call the function Get_Max */
	swap(&num1,&num2);

	/* print num1 after swap */
	printf("num1 after swap =%d\n",num1);
		/* print num2 befor swap */
	printf("num2 after swap =%d\n",num2);
	
}

/* the implementation of swap function  */
void swap(int* num1 , int* num2)
{
	/* define Local variable */ 
	/* the variables are declered without initialized */
int temp;

/* swap btw two numbers */
temp = *num1 ;
*num1 = *num2;
*num2 = temp;
	
}