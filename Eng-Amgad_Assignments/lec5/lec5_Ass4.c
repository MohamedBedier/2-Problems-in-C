/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec5_Ass4    
 * @version : 1.00   
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/




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
    int counter , num , holes = 0 , digit ; 
	
	/* ask user to enter number */
	printf("please enter a number: ");
	/* scan number from user */
	scanf("%d",&num);
	/* the number must be positive */
	if(num < 0)
	{
		num = num * (-1);
	}
	/* if the number is equal zero. it has one hole */
	if(num == 0)
	{
		holes = holes +1 ;
	}
		/* we use while loop for divided num into digits  */
		while(num != 0)
		{
				digit = num % 10;
				switch(digit)
				{
					case 1 : 
					case 2 :
					case 3 :
					case 5 :
					case 7 :holes = holes +0 ;break;
					case 0:
					case 4 :
					case 6 :
					case 9 :holes = holes +1 ;break;
					case 8 :holes = holes +2 ;break;
				}
				num = num / 10;
		}
		printf("the number of holes are %d \n",holes);
		
		
}


