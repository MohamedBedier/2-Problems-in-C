/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Function of bitwise     		            **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/




/* 
   import standard library built in tool chain 
   to take with operating system ====> to print 
   on screen or take any thing from user    
 */

#include<stdio.h>

/*Standard input _output library */


/*************************************/
/***    function prototypes       ****/
/*************************************/

int Set_Bit(int var , int BitNum);
int Clear_Bit(int var , int BitNum);
int Toggel_Bit(int var , int BitNum);
int Get_Bit(int var , int BitNum);


/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
	
	int result , Num , BitNum ;
	
	printf("please enter a number : ");
	scanf("%d",&Num);
	printf("please enter a BitNum : ");
	scanf("%d",&BitNum);
	printf("The number after setting the input bit number is %d\n",Set_Bit( Num , BitNum));
	printf("The number after clearing the input bit number is %d\n",Clear_Bit( Num , BitNum));
	printf("The number after toggling the input bit number is %d\n",Toggel_Bit( Num , BitNum));
	printf("The required get bit value is %d\n",Get_Bit( Num , BitNum));
	
}

/*************************************/
/***    function Implementations  ****/
/*************************************/

int Set_Bit(int Num , int BitNum)
{
	return Num |=(1<<BitNum);
}
int Clear_Bit(int Num , int BitNum)
{
	return Num &=(~(1<<BitNum));
	
}
int Toggel_Bit(int Num , int BitNum)
{
		return Num ^=(1<<BitNum);

}
int Get_Bit(int Num , int BitNum)
{
	
	
	return ((Num>>BitNum)&1);
	
}
