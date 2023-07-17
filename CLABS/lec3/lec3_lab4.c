/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : check grad                                  **/
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
 int grad ;
	
	/* Ask user to enter grad */
	printf("please enter grad : ");
	/* take the value of grad from user */
	scanf("%d",&grad);
	
	if((grad >= 0) && (grad < 50))
	{
		printf("student is failed\n");
		
	}else if ((grad >= 50) && (grad < 65))
	{
		printf("student has Normal\n");

	}else if ((grad >= 65) && (grad < 75))
	{
		printf("student has Good\n");
	}else if ((grad >= 75) && (grad < 85))
	{
		printf("student has Very Good\n");
	}else{	
		printf("student has Excellent\n");

	}
	
	
	
}