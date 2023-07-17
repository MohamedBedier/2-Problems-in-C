/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : chcek Numberis Power by 2 or not            **/
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

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
 
 int Number;
 
 /* Ask user to enter number :  */
	printf("please enter Number : ");
	
	/* take The Number from user */
	scanf("%d",&Number);
	/* check condition */
	switch(Number)
	{
		case 1234 : printf("welcome Ahmed \n");break;
		case 5678 : printf("welcome Youssef \n");break;
		case 1145 : printf("welcome Mohamed \n");break;
		default:	printf("wrong ID\n");break;		
	}
}