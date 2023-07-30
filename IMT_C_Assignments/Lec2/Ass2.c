/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec2_Ass2                               **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/
/* include standard input output library */
#include <stdio.h>


int main()
{
	
	/* define Local variables */ 
	int ID , password ; 
	
	/* Ask the user to enter ID */
	printf("please,Enter the ID : ");
	/* take ID from user */
	scanf("%d",&ID);
	

	switch(ID)
	{
		case 1 :
				printf("please enter the password : ");
				scanf("%d",&password);
				if(password == 12)
				{
				printf("welcome mohamed");
					
				}
				break;
		
		case 2 :
			printf("please enter the password : ");
				scanf("%d",&password);
				if(password == 34)
				{
				printf("welcome Ahmed");
					
				}
				break;
		
		case 3 :printf("please enter the password : ");
				scanf("%d",&password);
				if(password == 56)
				{
				printf("welcome shady");
					
				}
				break;
		
		default: printf("wrong id or password");
	}


	

}