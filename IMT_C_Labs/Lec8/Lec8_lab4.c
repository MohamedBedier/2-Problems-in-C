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
	int flag = 1 , n , i;
	printf("enter the positive interger number :");
	scanf("%d",&n);
	if(n == 0 || n == 1)
	{
		flag = 0;
	}else 
	{
		
		for(i = 2 ; i <= n/2 ; ++i)
		{
			if(n%i == 0)
			{
				flag =0;
			break;
			}
		}	
	}
	if(flag == 1)
	{
		printf("%d is prime number ",n);
	}else 
	{
		printf("%d is not prime number ",n);
		
	}
	
}