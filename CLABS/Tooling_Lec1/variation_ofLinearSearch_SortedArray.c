#include <stdio.h>


int main()
{

	/* sorted array */
	int arr[6] = {22,33,52,60,70,80};
	/* search_val */
	int search_val = 66;
	int i=0;
	
	for(i=0 ; i< 6 ;i++)
	{
		/* we can say that when we get an element greater than search_val ===> unsuccessful search */
		if(arr[i] >= search_val)
			break;
	}
	
	/* so no. of comparsions can be reduced for unsuccessful search */
	if(arr[i] == search_val)
	{
		printf("%d\n",i);
	}
	else 
	{
		
		printf("%i\n",-1);

	}
}