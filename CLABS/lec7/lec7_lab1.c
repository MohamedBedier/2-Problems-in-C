/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Array           				            **/
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

/* this is the main function */
/* Every program must have only one main function  */

int main(void)
{
  /* define array & its size */
  int Arr[10];
  char Local_index_I,Local_index_J;
  
  /* take values from user */ 
  for(Local_index_I=0 ; Local_index_I<10 ;Local_index_I++)
  {
  printf("please enter element number %d of array :\n",Local_index_I+1);
  scanf("%d",&Arr[Local_index_I]);
  }
  printf("reverse array:\n");
    for(Local_index_J=9 ; Local_index_J >=0 ;Local_index_J--)
  {
  printf("element number %d of array is %d:\n",Local_index_J+1 ,Arr[Local_index_J]);
  }
} 
