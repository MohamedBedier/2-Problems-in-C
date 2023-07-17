/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : lab 12                                      **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/


/* protype of function */
void Add_matrices(int *Mat_one_ptr ,int *Mat_two_ptr);


/* 

   import standard library built in tool chain 
   to deal with operating system ====> to print 
   on screen or take any thing from user    
 */

/*Standard input _output library */
#include<stdio.h>


/* this is the main function (the program start from here) */
/* Every program must have only one main function  */

int main(void)
{
	
	/* define two arrays of integers  */
	int Mat_one[3][3] = {{1,2,3},
						 {4,5,6},
						 {7,8,9}};	
						 
	int Mat_two[3][3] = {{9,8,7},
						 {6,5,4},
						 {3,2,1}};
						 
	/* calling Add_matrices */
	
	Add_matrices(&Mat_one[0][0] , &Mat_two[0][0]);
	
	
}
 
void Add_matrices(int *Mat_one_ptr ,int *Mat_two_ptr)
{
	/* define two variables */
		int count_I,count_J,sum=0;
		
		for(count_I = 0 ; count_I<3 ; count_I++)
		{
			for(count_J=0 ; count_J<3 ;count_J++)
			{
				sum= *(*(Mat_one_ptr + count_J)) + *(*(Mat_two_ptr+count_J));
				printf("%d\t",sum);
			}
			printf("\n");
		}
		
		
		
		
		
}