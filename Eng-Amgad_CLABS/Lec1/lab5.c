/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : increment & decrement                       **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

int main(void)
{
	int x = 10 ; 
	int z =5 ;
	int y = ++x ;
	
	printf("the value of y is : %d \n ", y); // 11 
	
	printf("the new value of x is : %d \n" , x);// 11
	
	printf("the value of y is : %d \n ", ++z);//6
	
	printf("the value of y is : %d \n ", z++); //6
	
	printf("the value of y is : %d \n ", --z); // 6
	
	printf("the value of y is : %d \n ", z--); // 6
	
	printf("the value of y is : %d \n ", x++); // 11
	
	printf("the value of y is : %d \n ", --x); // 11
	
	printf("the value of y is : %d \n ", x--); // 11
}
	