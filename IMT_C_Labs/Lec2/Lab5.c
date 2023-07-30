/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec2_lab5                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/* include standard input output library */
#include <stdio.h>


int main()
{
	/* define Local variable */ 
	int ID ;
	
	/*  Ask the user to enter ID  */
	printf("please , enter the ID : ");
	
	/* take from the user to enter ID */
	scanf("%d",&ID);
	
	switch(ID)
	{
		case 1234 : printf("welcome Ahmed");break;
		case 5678 : printf("welcome Youssef");break;
		case 1145 : printf("welcome Mina");break;
		default : printf("wrong ID");break;
	}
	
}