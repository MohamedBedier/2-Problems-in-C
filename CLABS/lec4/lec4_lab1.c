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
	if ( Number & (Number-1)==0 )
	{
		printf("NUMNER %d is power by 2 \n",Number);
	}
else {
	printf("NUMNER %d is not power by 2 \n",Number);
	}
}

/**************************/
/**  another solution    **/
/**************************/

/*


int main(void)
{
 
 int Number , x ;
 
 /* Ask user to enter number :  */
	//printf("please enter Number : ");
	
	/* take The Number from user */
	//scanf("%d",&Number);
	/* check condition */
	//x = Number & (Number--) ;
	/*if ( x == 0 )
	{
		printf("NUMNER %d is power by 2 \n",++Number);
	}
else {
	printf("NUMNER %d is not power by 2 \n",++Number);
	}
}


*/