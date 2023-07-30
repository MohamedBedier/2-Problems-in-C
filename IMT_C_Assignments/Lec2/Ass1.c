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
	int arr[10] , search_Val , I_count =1 , J_count , K_count , number_found = 9000;
	
	for(J_count =0 ;J_count<10 ;J_count++)
	{
		/* Ask the user to enter Number 1 */
		printf("please,Enter the number %d : ",I_count);
		/* take num1 from user */
		scanf("%d",&arr[J_count]);
		/* increament the variable I_count by 1 */
		I_count++;
	}
	
		/* Ask the user to enter Number 1 */
		printf("please,Enter search_Val : ");
		/* take num1 from user */
		scanf("%d",&search_Val);
		
	for(K_count =0 ;K_count<10 ;K_count++)
	{
		/* searching on search_Val*/
		if(arr[K_count] == search_Val)
		{
			/* if i found it save the index in number_found */
			number_found = K_count;
		}
	}
	
	/* check on the initial val of number_found  */
	if(number_found != 9000)
	{
		/* if changed print the index +1  */
		printf("value is exist at element number %d",K_count+1);
	}else{
		/* if not changed print number not exist */
		printf("number not exist");
	}
	
}