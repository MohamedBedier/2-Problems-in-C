/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>

/* this is the entry point of the program */
int main()
{
	/* define Local variable */ 
	/* the variables are declered without initialized */
	int ID ;
	
	/*  Ask the user to enter ID  */
	printf("please , enter the ID : ");
	
	/* take from the user to enter ID */
	scanf("%d",&ID);
	
	/* ckech on ID */
	switch(ID)
	{
		case 1234 : printf("welcome Ahmed");break;
		case 5678 : printf("welcome Youssef");break;
		case 1145 : printf("welcome Mina");break;
		default : printf("wrong ID");break;
	}
}