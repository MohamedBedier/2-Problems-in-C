/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec5_Ass1    
 * @version : 1.00  
 * @brief   : Write a C Function that prints the cube of any number
 * @author  : MOHAMED BEDIER MOHAMED                                                                                                            
 *                                                                                                       
 ************************************************************
 ************************************************************/



/* prototype of function  */
void GetCube_func(int CopyNum);


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
	/* define a variable to carry the number which wanted to get cube num of it */
	int LocaL_Num;
	/* ask the user to enter the number */
	printf("plz enter the num : ");
	/* take the number from the user */
	scanf("%d",&LocaL_Num);

	/* call the cubeFunction */
	GetCube_func(LocaL_Num);
	
}


void GetCube_func(int CopyNum)
{
	/* define variable to carry the result of cube num */
	int LocalCubeOfNum =0 ;
	
	/* get the cube of a num */
	LocalCubeOfNum = CopyNum * CopyNum *CopyNum;
	/* print the cube of the number */
	printf("The Cube of Number %d is %d ",CopyNum,LocalCubeOfNum);
	
}