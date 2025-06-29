/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec5_Ass2    
 * @version : 1.00  
 * @brief   :Write a C Function that returns the addition or subtraction
 *           or multiplication or division for two numbers. The function
 *           should take the required operation and two numbers as
 *           arguments. It also should check that the input operation is one
 *           of those operation that mentioned before and if not it should
 *           return error. The function should be implemented using switch
 *           case.
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




/* prototype of function */

int cal_function(int CopyNum1,int CopyNum2,char CopyOperation);


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main()
{
	/* define variables to carry numbers and the result */
	int LocaL_Num1,LocaL_Num2,Local_Result=0;
	/* define variable to carry operations */
	char Local_OPeration;
	/* Ask user to enter number 1 */
	printf("plz enter the num1 : ");
	/* take number 1 from user */
	scanf("%d",&LocaL_Num1);
	
		/* Ask user to enter operation*/
	printf("plz enter the operation : ");
	/* take operation from user */
	scanf(" %c",&Local_OPeration);
	
	/* Ask user to enter number 2 */	
	printf("plz enter the num2 : ");
	/* take number 2 from user */
	scanf("%d",&LocaL_Num2);

	
	/* calling function */
	Local_Result = cal_function(LocaL_Num1,LocaL_Num2,Local_OPeration);
	printf("The result is %d ",Local_Result);
	
	
	
}

int cal_function(int CopyNum1,int CopyNum2,char CopyOperation)
{
	switch(CopyOperation)
	{
		case '+' :return (CopyNum1 +CopyNum2);break;
		case '-' :return (CopyNum1 -CopyNum2);break;
		case '*' :return (CopyNum1 *CopyNum2);break;
		case '/' :if(CopyNum2 != 0)
					{
						return (CopyNum1/ CopyNum2);break;
					}else{
						printf("math error ! you trying to divide by zero\n");
						return -1;
						break;
					}
			default: 	printf("you enter wrong operation\n");
			return -1;
						break;	
		
	}
	
	
	
}