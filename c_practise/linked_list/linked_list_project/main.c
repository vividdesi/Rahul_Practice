#include<stdio.h>
#include<stdlib.h>
#include"headerfile.h"

int main(void)
{
	int choice,data;
	node *start=NULL;
	while(1)
	{
		printf("1.Insert_end 2.search 3.count 4.Display 5.Exit\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		getchar();
		switch(choice)
		{
			case 1:start=insert_node(start);
			       break;

			case 2:printf("Enter the data to search in list\n");
			       scanf("%d",&data);
			       getchar();
			       search_node(start, data);
			       break;

		        case 3:count_nodes(start);
			       break;

			case 4:display_nodes(start);
			       break;

			case 5:printf("Thank you\n");
			       exit(0);
			       break;

			default:printf("Invalid input\n");


		}
	}
}
