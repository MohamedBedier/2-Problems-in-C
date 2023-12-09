/* import the libraries */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "interface.h"




int main()
{
	int i , j;
	i = Welcome_Window();
	
	if(i == 1 )
	{
		Admin_Window();
		
		
	}else if (i == 2)
	{
		Client_Window();
	}else
	{
		printf("wrong option\n");
		
	}
	
		/* call the function of Admin_Option*/
	j = Admin_Option();
	switch()
	{
		case 1 :   ;break;
		case 2 :   ;break;
		case 3 :   ;break;
		case 4 :   ;break;
		case 5 :   ;break;
		case 6 :   ;break;
		case 7 :   ;break;
		case 8 :   ;break;
		
		
	}
	
	
	
}
