/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Assignment 5                                **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/



/* prototype of function */
void Prime_function (int num1 ,int num2);
int isPrime(int num);

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */


int main()
{
	int num1 , num2; 
	/* Ask user to enter num1 */
	printf("please enter num1 : ");
	/* take num1 from user */
	scanf("%d",&num1);
	/* Ask user to enter num1 */
	printf("please enter num2 : ");
	/* take num1 from user */
	scanf("%d",&num2);
	/* pass Arguments By value */
	Prime_function(num1 , num2);
	
	
	
	
}
int isPrime(int num)
 {
    if (num <= 1) {
        return 0;  // Not prime if number is less than or equal to 1
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime if it has a divisor other than 1 and itself
        }
    }

    return 1;  // Prime number
}


void Prime_function (int num1 ,int num2)
{
	/* define varibles */ 
	int counter_I , counter_J , counter_k , counter_L;
	
	for(counter_k = num1 ; counter_k <= num2 ; counter_k++)
	{
		if (isPrime (counter_k))
		{
			printf("%d is prime number\n",counter_k);
			
		}
	}
	
}
	