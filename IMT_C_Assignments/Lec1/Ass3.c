/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec1_Ass3                               **/
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
	int num1,num2,I_count = 1;
	
	/* Ask the user to enter Number 1 */
	printf("please,Enter the number %d : ",I_count);
	/* take num1 from user */
	scanf("%d",&num1);
	/* increament the variable I_count by 1 */
	I_count++;
	
	/* Ask the user to enter Number 2 */
	printf("please,Enter the number %d : ",I_count);
	/* take num2 from user */
	scanf("%d",&num2);
	
     /* print sum of num1 and num2 */
	printf("num1 + num2 = %d\n",num1 + num2); 
	/* print sub of num1 and num2 */
	printf("num1 - num2 = %d\n",num1 - num2);
	/* print adding of num1 and num2 */	
	printf("num1 & num2 = %d\n",num1 & num2);
	/* print oring of num1 and num2 */
	printf("num1 | num2 = %d\n",num1 | num2);
	/* print Xoring of num1 and num2 */
	printf("num1 ^ num2 = %d\n",num1 ^ num2);
}