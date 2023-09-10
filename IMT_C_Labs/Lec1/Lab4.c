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
	/* define variables */
	/* the variables are declered with initialized */
	int Number_1 = 7 , Number_2 = 4;
	
	
	/* print anding value between Number_1,Number_2*/
	printf("Number_1 & Number_1 = %d\n",Number_1&Number_2); 
	
	/* print oring value between Number_1,Number_2*/
	printf("Number_1 | Number_1 = %d\n",Number_1|Number_2); 
	
	/* print xoring value between Number_1,Number_2*/
	printf("Number_1 ^ Number_1 = %d\n",Number_1^Number_2);
	
	/* print sheft right value between Number_1,Number_2*/
	printf("Number_1 >> 1 = %d\n",Number_1>>1);
	
/* print sheft left value between Number_1,Number_2*/
	printf("Number_2 << 2 = %d\n",Number_2<<2);
}