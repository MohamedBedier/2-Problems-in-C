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
	/* create struct */
	typedef struct
	{
		int salary;
		int Bonus;
		int Deduction;
	}emplopee_information;
	
	/* create objects from struct */
	emplopee_information  Ahmed , Amr , Waleed;

	/* define variable to carry Total_Needed */
	int Total_Needed;
	
	
		/* message for the user */
		printf("please enter Ahmed salary: ");
		/* take salary from user */
		scanf("%d",&Ahmed.salary);
	
		/* message for the user */
		printf("please enter Ahmed Bonus: ");
		/* take Bonus from user */
		scanf("%d",&Ahmed.Bonus);

		/* message for the user */
		printf("please enter Ahmed Deduction: ");
		/* take Deduction from user */
		scanf("%d",&Ahmed.Deduction);	


		/* message for the user */
		printf("please enter Amr salary: ");
		/* take salary from user */
		scanf("%d",&Amr.salary);
	
		/* message for the user */
		printf("please enter Amr Bonus: ");
		/* take Bonus from user */
		scanf("%d",&Amr.Bonus);

		/* message for the user */
		printf("please enter Amr Deduction: ");
		/* take Deduction from user */
		scanf("%d",&Amr.Deduction);

		/* message for the user */
		printf("please enter Waleed salary: ");
		/* take salary from user */
		scanf("%d",&Waleed.salary);
	
		/* message for the user */
		printf("please enter Waleed Bonus: ");
		/* take Bonus from user */
		scanf("%d",&Waleed.Bonus);

		/* message for the user */
		printf("please enter Waleed Deduction: ");
		/* take Deduction from user */
		scanf("%d",&Waleed.Deduction);

		/* calculate total needed */
		Total_Needed = Ahmed.salary + Ahmed.Bonus-Ahmed.Deduction;
		Total_Needed += Amr.salary + Amr.Bonus-Amr.Deduction;
		Total_Needed += Waleed.salary + Waleed.Bonus-Waleed.Deduction;
		
		/* print total needed */
		printf("total value needed is %d",Total_Needed);
}