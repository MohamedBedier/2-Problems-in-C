/*************************************************************/
/****************************************************************/
/**                                                            **/
/** File Name : ask user to enter Muliply of 4*3               **/             
/** Auther    : MOHAMED BEDIER MOHAMED                         **/
/** Verision :  1.00                                           **/
/**                                                            **/
/****************************************************************/
/****************************************************************/




/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 
 int Number ;
 
 /* ask user to enter Muliply of 4*3  */
	printf("please enter Muliply of 4*3  : ");
	
	/* take Muliply of 4*3 from user */
	scanf("%d",&Number);
	/* check condition */
	while(Number != 12)
	{
		printf("not correct , please try again \n");
		
		scanf("%d",&Number);
	}
	printf("think you , you enter the true value \n");
}