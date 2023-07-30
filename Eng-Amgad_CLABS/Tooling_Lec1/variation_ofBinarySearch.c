#include <stdio.h>


int main()
{

	/* sorted array */
	int arr[7] = {5,8,11,15,35,45,70};
	/* search_val */
	int search_val = 35;
	int start = 0;
	int end = 6;
	int mid =(end + start)/2;
	int i=0;
	
	for(i=0 ; i < 7 ; i++)
	{
		
		/* we can say that when we get an element greater than search_val ===> unsuccessful search */
		if(arr[mid] == search_val)
		{
			break;
		}
		else if (arr[mid] < search_val)
		{
			start = mid +1 ;
		}
		else if (arr[mid] > search_val)
		{
			end = mid -1 ;
		}
			mid =(end + start)/2;
	}
	
	/* so no. of comparsions can be reduced for unsuccessful search */
	if(arr[mid] == search_val)
	{
		printf("%d\n",mid);
	}
	else 
	{
		
		printf("%i\n",-1);

	}
}