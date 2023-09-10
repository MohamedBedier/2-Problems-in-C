/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/


/* include standard input output library */
#include <stdio.h>

/* prototype of function Get_Max_Min_Grad*/
void Get_Max_Min_Grad(int arr[3][4],int rows,int col);

/* this is the entry point of the program */
int main()
{
	/* define vaariables */
	int Count_I,Count_J,Grad;
	/* define 2Dim array */
	int Student_Arr[3][4];
	
	/* this loop for 3 students */
	for(Count_I = 0 ; Count_I < 3 ;Count_I++)
	{
		/* message for user */
		printf("Student num : %d\n",Count_I+1);
		/* this loop for 4 exams */
		for(Count_J = 0 ; Count_J < 4 ;Count_J++)
		{
			/* message for user */
			printf("grad of the exam num %d : ",Count_J+1);
			/* scan the grad of exam Count_J of student num Count_I*/
			scanf("%d",&Student_Arr[Count_I][Count_J]);
		}
		
	}
	/* call function */
	Get_Max_Min_Grad(Student_Arr,3,4);
}

/* the implementation of function Get_Max_Min_Grad*/
void Get_Max_Min_Grad(int arr[3][4],int rows,int col)
{
		/* define vaariables */
	int Count_I,Count_J,Min_Grad,Max_Grad ;
	
	/* this loop for search on 3 students */
	for(Count_I = 0 ; Count_I < rows ;Count_I++)
	{
		/* initiate Min_Grad and Max_Grad by the first element in the array  */
		Min_Grad = arr[0][0];
		Max_Grad = arr[0][0];
		/* message for user */
		printf("search in grad of student num : %d\n",Count_I+1);
		
		/* this loop for searcb on 4 exams grad  */
		for(Count_J = 0 ; Count_J < col ;Count_J++)
		{
			/* check on Min_Grad */
			if(arr[Count_I][Count_J] < Min_Grad )
			{
				Min_Grad = arr[Count_I][Count_J];
			} 
			
			/* check on Max_Grad */
			if (arr[Count_I][Count_J] > Max_Grad )
			{
				Max_Grad = arr[Count_I][Count_J];
			}
			
		}
	}
	/* print Max_Grad */
	printf("max grad = %d\n",Max_Grad);
	/* print Min_Grad */
	printf("min grad = %d\n",Min_Grad);
}