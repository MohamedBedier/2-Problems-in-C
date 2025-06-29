/*************************************************************
 *************************************************************
 *                                                         
 * @file    : Lec3_Ass2    
 * @version : 1.00  
 * @brief   : Write program that converts any letter from
 *            lowercase to uppercase.
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

int main(void)
{
	/* define a variable to carry to a character from user */
	char Local_Character;
	
	/*define a variable to carry to the decimal value of the character from ascii table */
	int Local_UpperCsae;
	
	/* Ask user to enter the small Character */
	printf("please,Enter a small character : ");
	
	/* take the value Character from user */
	scanf("%c",&Local_Character);
	
	/* convert letter from lowercase to uppercase */
	if((Local_Character >= 97)&&(Local_Character <= 122))
	{
	  /* Equation  */
		Local_UpperCsae = Local_Character -32;
	
		printf("the upper Alphabit is %c\n",Local_UpperCsae);
	}else if((Local_Character >= 65)&&(Local_Character <= 90))
	{
	  printf("character is already upper Alphabit %c\n",Local_Character);
	}else 
	{
	  printf("character %c is not Alphabit \n",Local_Character);
	}
	

	
	
}