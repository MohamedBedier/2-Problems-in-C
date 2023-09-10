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
	/* define Id variable */
	int ID;
	
	/* create struct */
	typedef struct
	{
		int Math;
		int Language;
		int Physics;
		int Chemistry;
	}Subject_information;
	
	/* create objects from struct */
	Subject_information arr[10];

	/* this loop to generate randam values of grad */
	for(int i = 0 ; i< 10 ; i++)
	{	
		arr[i].Math = 10 * i;
		arr[i].Language = 5 * i;
		arr[i].Physics = 8 * i;
		arr[i].Chemistry = 12 * i;
	}

	/* message to ask user to enter id */
	printf("please enter students ID : ");
	/* take id from user */
	scanf("%d",&ID);

	/* check on id if it valid or not */
	if(ID >= 0 && ID <=9)
	{
		/* if it is valid print student information */
		printf("Math Grad: %d\n",arr[ID].Math);
		printf("Language Grad: %d\n",arr[ID].Language);
		printf("Physics Grad: %d\n",arr[ID].Physics);
		printf("Chemistry Grad: %d\n",arr[ID].Chemistry);
		
	}else 
	{
		/* if it is not valid print wrong ID */
		printf("wrong ID \n");
	}

}