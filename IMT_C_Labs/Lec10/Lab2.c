/*************************************************************/
/*************************************************************/
/** File Name : IMT_C_LABS                                  **/
/** Auther    : MOHAMED BEDIER MOHAMED                      **/
/** Verision :  1.00                                        **/
/*************************************************************/
/*************************************************************/


/* include standard input output library */
#include <stdio.h>
#include <stdlib.h>
#include "STD_TYPES.h"

typedef struct node
{
	sint32 Info;
	struct node* Link;
}Node_t;

void DisplayList(Node_t* Start);
uint8 CountNodes(Node_t* Start);
sint8 Search(Node_t* Start,sint32 SearchVal);
Node_t* InsertAtBeginning(Node_t* Start, sint32 Data);
void InsertAtEnd(Node_t* Start, sint32 Data);
Node_t* CreateList(void);
void InsertAfterANode(Node_t* Start, sint32 Data, sint32 NewData);
Node_t* InsertBeforeANode(Node_t* Start, sint32 Data, sint32 NewData);
Node_t* InsertAtPos(Node_t* Start, uint32 Pos, sint32 NewData);


/* function prototypes */
int Option_Window(void);



/* this is the entry point of the program */
int main()
{
	sint32 ValueToInsert;
	uint32 NodeVal,position;
	int option;
	Node_t *Start = NULL;
	while(1)
	{
	option=Option_Window();
	
	if(option == 0)
	{
	Start =CreateList();
	printf("\n");
	}else if(option == 1)
	{
	DisplayList(Start);
		printf("\n");
	}else if(option == 2)
	{
		printf("exist system\n");
break;
	}else 
	{
		printf("wrong options\n");
	}
	}
	
	
}
  /* implementation of options window for the user */
int Option_Window(void)
{
	 int option;
	/* message for the user */
	printf("........choice from this options please.......\n\n\n");
	
	/* option 1 */
	printf("Press number 0 to add node \n");
	
	/* option 2 */
	printf("Press number 1 to print the linked list \n");
	
	/* option 3 */
	printf("Press number 2 to exit the system \n");
	
	printf("your option is :");
	
	/* take option number from user */
	scanf("%d",&option);
	
	return option;
}


void DisplayList(Node_t* Start)
{
	/* check if list is empty or not */
	if(Start == NULL)
	{
		/* list is empty */
		printf("list is empty\n");
		
	}else
		{
			/* pointer carries the reference of list */
			Node_t* ptr = Start;
			printf("\nThe list is \n");
			/* check if the ptr carries NULL (LAST NODE)*/
			while(ptr != NULL)
			{
				
				/* print data of the list */
				printf("%d\t",ptr->Info);
				/* upgrad the new address of the next node */
				 ptr = ptr->Link;
				
			}
		}
}

uint8 CountNodes(Node_t* Start)
{
	
	/* define a varible to carry No_of_Nodes */
	uint8 No_of_Nodes = 0;
	/* check if list is empty or not */
	if(Start == NULL)
	{
		/* list is empty */
		printf("list is empty\n");
		
	}else
		{
			/* pointer carries the reference of list */
			Node_t* ptr = Start;
			uint8 No_of_Nodes=0;
			/* check if the p carries NULL (LAST NODE)*/
			while(ptr != NULL)
			{
				/* count the No_of_Nodes by 1 */
				 No_of_Nodes += 1 ;
				/* upgrad the new address of the next node */
				ptr = ptr->Link;
			}
		}
	return No_of_Nodes;
}

	/* return type is sint8 because if the SearchVal not founded it will return -1 */
sint8 Search(Node_t* Start,sint32 SearchVal)
{
	/* define varible  */
	sint8  position_of_SearchVal  =1;
	/* check if list is empty or not */
	if(Start == NULL)
	{
		/* list is empty */
		printf("list is empty\n");
		position_of_SearchVal = -1 ;
		
	}else
		{
			/* pointer carries the reference of list */
			Node_t* ptr = Start;
			
			/* check if the p carries NULL (LAST NODE)*/
			while((ptr != NULL) && ((ptr->Info) != SearchVal ))
			{
				/* upgrad the new address of the next node */
				ptr = ptr->Link;
				/* count the position_of_SearchVal 1 */
				position_of_SearchVal++;
				
				}
			
			if(ptr == NULL)
			{
				position_of_SearchVal=-1;
			}else{
				/* do nothing */
			}	
		}
		return position_of_SearchVal;
}

Node_t* InsertAtBeginning(Node_t* Start, sint32 Data)
{
	/* create new node from type of (Node_t*) */
	Node_t* temp = (Node_t*)malloc(sizeof(Node_t*));
	/* access data in the new struct */
	temp->Info = Data;
	/*Make the new node point to the first node before insertion*/
	temp->Link = Start;
	/*Update the reference to the list*/
	Start = temp;
	
		return Start;
}

void InsertAtEnd(Node_t* Start, sint32 Data)
{
	/* pointer carries the reference of list */
			Node_t* ptr = Start;
	/* create new node from type of (Node_t*) */
	Node_t* temp = (Node_t*)malloc(sizeof(Node_t*));
	/* access data in the new struct */
	temp->Info = Data;

	while((ptr->Link) != NULL)
	{
		ptr = ptr-> Link;
		
	}
	/*Make the new node point to NULL */
	temp->Link = ptr->Link;
	/*Make the new node point to the node before insertion*/
	ptr->Link = temp;
	
}


Node_t* CreateList(void)
{
	uint32 NodeNumber,i;
	sint32 Val;
	Node_t* Start = NULL;
	
	printf("Please enter no of nodes: ");
	scanf("%d",&NodeNumber);
	
	printf("Please enter 1st element: ");
	scanf("%d",&Val);
	Start= InsertAtBeginning(Start,Val);
	
	for(i=1;i<NodeNumber;i++)
	{
		printf("Enter next data element: ");
		scanf("%d",&Val);
		InsertAtEnd(Start,Val);
	}
	
	return Start;
}

void InsertAfterANode(Node_t* Start, sint32 Data, sint32 NewData)
{
	/* check if list is empty or not */
	if(Start == NULL)
	{
		/* list is empty */
		printf("list is empty\n");
		
	}else if(Start->Info == Data)
	{
		Start= InsertAtBeginning(Start,NewData);
	}else
	{
		/* pointer carries the reference of list */
		Node_t* ptr = Start;
		
		while(((ptr->Link)->Info )== Data || (ptr != NULL))
		{
			ptr = ptr->Link;
		}
		if(ptr == NULL)
		{
			printf("%d Not founded \n",Data);
		}else{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}	
	}
	
}
Node_t* InsertBeforeANode(Node_t* Start, sint32 Data, sint32 NewData)
{
		/* check if list is empty or not */
	if(Start == NULL)
	{
		/* list is empty */
		printf("list is empty\n");
		
	}else if(Start->Info == Data)
	{
		 InsertAtEnd(Start,NewData);
	}else
	{
		/* pointer carries the reference of list */
		Node_t* ptr = Start;
		
		while ((ptr->Info == Data) || (ptr->Link != NULL))
		{
			ptr = ptr->Link;
		}
		if(ptr == NULL)
		{
			printf("%d Not founded \n",Data);
		}else{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}	
	}
	return Start;
}

Node_t* InsertAtPos(Node_t* Start, uint32 Pos, sint32 NewData)
{
	if(Start==NULL)
	{
		printf("\nEmpty list\n");
	}
	else if(Pos == 1)
	{
		Start= InsertAtBeginning(Start,NewData);
	}
	
	else
	{
		Node_t* ptr = Start;
		uint32 i;
		for(i=1;i<((Pos-1))&&(ptr!=NULL);i++)
		{
			ptr= ptr->Link;
		}
		if(ptr==NULL)
		{
			printf("\nInvalid Position \n");
		}
		else
		{
			Node_t* Temp = (Node_t*) malloc(sizeof(Node_t));
			Temp->Info = NewData;
			Temp->Link= ptr->Link;
			ptr->Link= Temp;
		}
	}
	return Start;
}