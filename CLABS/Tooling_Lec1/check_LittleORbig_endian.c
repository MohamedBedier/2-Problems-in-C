#include <stdio.h>

int main()
{
	int x = 0x11223344;	
	char* ptr =(char*)&x;
	
	if(*ptr == (char)x)
	{		
		printf("little endian");
	}
	else
	{	
		printf("big endian");
	}
	
}