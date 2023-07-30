/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec1_Ass2                               **/
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
	int num1,num2,num3,I_count = 1;
	
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
	/* increament the variable I_count by 1 */
	I_count++;
	
	/* Ask the user to enter Number 3 */
	printf("please,Enter the number %d : ",I_count);
	/* take num3 from user */
	scanf("%d",&num3);

	/* print Number 3 */
	printf("number %d : %d\n",I_count,num3);
	/* decreament the variable I_count by 1 */
	I_count--;
	/* print Number 2 */
	printf("number %d : %d\n",I_count,num2);
	/* decreament the variable I_count by 1 */
	I_count--;
	/* print Number 1 */
	printf("number %d : %d\n",I_count,num1);
}