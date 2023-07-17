#include <stdio.h>


int main()
{

	int arr[6] = {1,2,3,4,5};
	int search_val = 6;
	int i=0;
	
	while(arr[i] != search_val)
	{
		i++;
	}
	
	if(i < 6)
		printf("%d",i);
	
	else 
		printf("%i",-1);

	
}