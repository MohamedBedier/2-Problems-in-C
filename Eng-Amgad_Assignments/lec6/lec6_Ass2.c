/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec6_Ass1    
 * @version : 1.00  
 * @brief   : Write a C Function that returns the maximum number of
 *            Zeros between two ones in the number binary.
 *            Example:
 *            Input binary = 10110010001010000011100010000110
 *            Output = 5
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/

/* protype of function */
void maximum_number_of_Zeros(int Number);
int GetBit(int Number ,int BitNumber);

/* 
   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	/* define two integers   */
	int Number ;
	
	/* Ask user to enter the Number */
	printf("please enter the Number : ");
	/* take the Number from user */
	scanf("%d",&Number);
	/* call by value */
	maximum_number_of_Zeros(Number);
}

	int GetBit(int Number ,int BitNumber)
	{
		return ((Number >> BitNumber) & 1 );
	}
	
void maximum_number_of_Zeros(int Number)
{
	/* define variables */
	int maxCount =0, BitNumber1 , BitNumber2, counter= 0 ;
		/* check if the first bit has one or zero */
	for(BitNumber1=0 ; BitNumber1 <32 ; BitNumber1++)
	{
		/* check if the first bit has one  */
		if (GetBit(Number , BitNumber1))
		{
			/* if true loop for checking if the next bit has one or zero  */
			for(BitNumber2=BitNumber1 + 1 ; BitNumber2 <32 ; BitNumber2++)
				{
					/* check if the next bit has zero  */
					if (GetBit(Number , BitNumber2) == 0)
					{
						/* if true increase one */
						counter++;
					}else 
					{
						/* if false check if the counter > maxCount */
						if(counter > maxCount)
						{
							maxCount = counter ;
						}
						/* delete the value inside counter to start from zero */
							counter = 0;
					}
					
				}
		}
		
		
	}
	/* print counter */
	printf(" the number of zeros in the binary representation is %d",maxCount);
	
}