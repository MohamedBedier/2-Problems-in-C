/* import the libraries */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include <string.h>
#include <conio.h>

#include "Cfg.h"

int Welcome_Window(void)
{
	/* define a variable to carry number which entering by user */
	int option ;
	
	printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
	printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =                  WELCOME                  =");
    printf("\n\t\t\t        =                    TO                     =");
    printf("\n\t\t\t        =                IMT_BANK_SYSTEM            =");
    printf("\n\t\t\t        =                                           =");
    printf("\n\t\t\t        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    printf("\n\t\t\t  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**\n\n");
	
	/* message for the user to choice from these options */
	printf("please choice from these options: \n");
	
	printf("1- Admin Window.\n");
	printf("2- Client Window.\n");
	
	/* message */
	printf(">>>You entered : ");

	/* take the option from user */
	scanf("%d",&option);
	
	/* check on the number entered by user */
	if((option == 1) || (option == 2))
	{
	   /* return number which entered by user */
		return option;
	}else{
		/* wrong option */
		printf(">>>sorry you entered wrong option\n");
		/* messag for user to try again */
		printf("\n\nTry again\n\n");
		
		/* start the system again */
		Welcome_Window();
	}
	
}

void  Enter_UserName(void)
{
	char UserName[20];
	/* take the userName from user */
	scanf("%s",UserName);
	
	if(strcmp(UserName,"Ahmed") == 0)
	{
		printf("welcome Ahmed\n");
	}else if(strcmp(UserName,"Mohamed") == 0)
	{
		printf("welcome Mohamed\n");
	}else if(strcmp(UserName,"Ibrahim") == 0)
	{
		printf("welcome Ibrahim\n");
	}else if(strcmp(UserName,"Amr") == 0)
	{
		printf("welcome Amr\n");
	}else {
		
		/* message for the user */ 
        printf("Invalid username.\n");
		/* message for the user */ 
		 printf("\n\nplease try again.\n\n");
		 /* message for the user */ 
		 printf("Please enter your userName: ");
		 /*call func Enter_UserName again */ 
		Enter_UserName();
    }
	
}
void  Enter_Password(void)
{
	int Password;
	/* take the Password from user */
	scanf("%d",&Password);
	switch(Password)
	{
		case 1111:printf("correct password\n welcome in your admin window\n");break;
		case 2222:printf("correct password\n welcome in your admin window\n");break;
		case 3333:printf("correct password\n welcome in your admin window\n");break;
		case 4444:printf("correct password\n welcome in your admin window\n");break;
		default : printf("Wrong password \n\nplease try again\n\n");printf("Please enter your Password: ");Enter_Password();break;
	}
	
}
int Admin_Option(void)
{
	int Option;
	
	printf(">>>Please choice from these options \n");
	
	printf("1- Create New Account\n");
	printf("2- Open Existing Account\n");
	printf("3- Make Transaction\n");
	printf("4- Change Account Status\n");
	printf("5- Get Cash\n");
	printf("6- Deposit in Account\n");
	printf("7- Return to main Menu\n");
	printf("8- Exit System\n");
	
	printf(">>>You entered : ");
	
	scanf("%d",&Option);
	
	if(Option >= 1 && Option <=8 )
	{
		return Option;
	}else 
	{
		printf("Wrong Option,please Try again\n\n");
		printf(">>>Please choice from these options \n");
		Admin_Option();
	}
}

void  Admin_Window(void)
{
	/* message for the user */ 
	printf(">>>you choice to enter Admin_Window \n");
	
	/* message for the user */ 
	printf("Please enter your userName: ");
	/* call the function of Enter_UserName*/
	Enter_UserName();
	
		/* message for the user */ 
	printf("Please enter your Password: ");
	/* call the function of Enter_Password*/
	Enter_Password();
	
}
 


/* Bank Account : must include these feature 
                  1- Full Name : at least first four names
                  2- Full Address
                  3- National ID:consist of 14 digit Number
                  4- Age				  
                  5- Bank Account ID:must be generated automatically(10 digit)
				  6- Guardian : In case of user is less than 21 he must have a guardian
				  7- Guardian National ID:consist of 14 digit Number
				  8- Account Status :default Account Status is Active, but it can be also (Restricted or Closed)
				  9- Balance
				  10- Password:Password will be generated for each account during creation of it
				  */




New_Account_t* Creating_Account(New_Account_t* New_User_Account)
{
	/* pointer to carry the list and make it to refer NULL */
	New_Account_t* Start = NULL;
	New_Account_t* temp = (New_Account_t*)malloc(sizeof(New_Account_t*));
	printf("");
	
	
	
}



void Open_Existing_Account(void)
{
	
}
void Make_Transaction(void)
{
	
	
}
void Change_Account_Status(void)
{
	
}
void Get_Cash(void)
{
	
}
void Deposit_in_Account(void)
{
	
}
void Return_to_main_Menu(void)
{
	
}
void Exit_System(void)
{
	
	
}







void  Client_Window(void)
{
	
	
}

