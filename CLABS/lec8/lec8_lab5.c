/*************************************************************/
/*************************************************************/
/**                                                         **/
/** File Name : Array           				            **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/**                                                         **/
/*************************************************************/
/*************************************************************/

/*Standard input _output library */

#include<stdio.h>
void delete_Number_from_array(int arr[] , int size , int index);

int main(void)
{
	int counter ,index,j;
		/* question why error? */

	//printf("please enter size of array : ");
	//scanf("%d",&size);
	int arr[10];
	for(counter=0 ; counter<10 ;counter++)
	{
		printf("please enter element number %d: ",counter+1);
		scanf("%d",&arr[counter]); 
	}
	
	printf("please enter delete index \n");
	scanf("%d",&index);
	
	if (index > 9)
	{
		printf("delete is imposible \n");
		
	}else{
		
		delete_Number_from_array(arr,10,index);
		printf("arr after delete number \n");
		for(j=0 ; j<9 ;j++)
		{
			printf("array element number :%d \t",arr[j]);
			
		}
	}

} 

void delete_Number_from_array(int arr[] , int size , int index)
{
	int k;
	for(k=index ; k <9 ;k++ )
	{
		arr[k]=arr[k+1];
	}
	
}