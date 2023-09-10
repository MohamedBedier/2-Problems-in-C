/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>

/* this is the prototype of the function Get_Max  */
void Get_Max(int num1 , int num2);


/* this is the entry point of the program */
int main()
{
	/* define Local variable */ 
	/* the variables are declered without initialized */
	int num1;
	int num2;

	/* ask the user to enter num1 */
	printf("Enter the num1 : ");
	
	/* take the num1 from user */
	scanf("%d",&num1);
	/* ask the user to enter num2 */
	printf("Enter the num2 : ");	
	/* take the num2 from user */
	scanf("%d",&num2);
	
	/* call the function Get_Max */
	Get_Max(num1,num2);

}

/* the implementation of Get_Max function  */
void Get_Max(int num1 , int num2)
{
	/* check which num is the max */
	if(num1 > num2)
	{
		printf("the maximum value is :%d",num1);
	}else if (num1 == num2)
	printf("the numbers have the same value :%d",num2);
	else{
		printf("the maximum value is :%d",num2);
	}
	
	
}