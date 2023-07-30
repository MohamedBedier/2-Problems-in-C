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
int chech_power_of_num(int number);


/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main ()
{ 
   /* define variables */
    int counter , num , result = 0 ; 
	
	/* ask user to enter number */
	printf("please enter a number: ");
	/* scan number from user */
	scanf("%d",&num);
	
	/* call [ chech_power_of_num  ] function */
	result = chech_power_of_num(num);
	printf("%d\n",result);
}
	
	
int chech_power_of_num(int number)
{
	int x = -1;
	
		if(number % 3 == 0)
		{
			while(number > 1) 
			{
				if(number == 3)
				{
					/* power of 3 */
					x = 0;
				}else{
					x = -1 ;
				}
					number /= 3 ;
				
			}
		}else if(number % 2 == 0)
		{
			while(number > 1)
			{
				if(number == 2)
				{
					/* power of 2 */
					x= 1 ;
				}else{
					x= -1 ;
				}
					number /= 2 ;
				
			
			}
			
		}
	
	
	return x ;
}