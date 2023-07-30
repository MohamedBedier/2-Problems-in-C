/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : IMT_Lec2_Ass3                               **/
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
	int num1,num2, num3,I_count = 1;
	
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
	scanf("%d",&num2);
	
	
		if(num1 > num2 && num1> num3)
		{
			printf("max is %d",num1);
		}else if(num2 > num1 && num2> num3)
		{
			printf("max is %d",num2);
		}else
		{
			printf("max is %d",num3);
		}
	

}