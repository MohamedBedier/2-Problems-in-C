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
	int Count=1;

	/*  Ask the user to enter num  */
	printf("please Enter number to display its multiplication table : ");
	
	/* take from the user to enter num */
	scanf("%d",&num);
	
	/* check if (num * Count) <= (num * num) */
	while((num * Count) <= (num * num))
	{
		printf("%d x %d = %d\n",num,Count,num*Count);
		/* increase the Count by one */
		Count++;
		
	}
	
	
}