#ifndef   INTERFACE_H
#define   INTERFACE_H

typedef struct New_Account
{
	char Full_Name[50];
	char Full_Address[50];
	int age;
    double National_ID;
	double Guardian_National_ID;
	double balance;
    char password[20];
    char accountID[10];
    int isActive; 
    struct New_Account *next_node;
}New_Account_t;



int Welcome_Window(void);
void  Admin_Window(void);
void  Client_Window(void);
int   Admin_Option(void);


void Create_New_Account(void);
void Open_Existing_Account(void);
void Make_Transaction(void);
void Change_Account_Status(void);
void Get_Cash(void);
void Deposit_in_Account(void);
void Return_to_main_Menu(void);
void Exit_System(void);







#endif