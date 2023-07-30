/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec1_Ass1                               **/
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
	int I_count,J_count,K_count;
	/* this loop for count 6 ROWS */
	for(I_count = 0 ; I_count<= 5;I_count++)
	{
		/* this nested loop for count spaces in ROWS by the relation 5 - I_count  */
		for(J_count = 0 ; J_count < 5 - I_count; J_count++ )
		{
			printf(" ");
		}
		/* this nested loop for count stars in ROWS by the relation 2*I_count +1  */
		for(K_count = 0 ; K_count < 2*I_count +1 ; K_count++)
		{
			printf("*");
		}
		/* for new row */
		printf("\n");
		
	}
	
	
}