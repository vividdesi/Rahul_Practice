#include<stdio.h>
#include<stdlib.h>
#include"headerfile.h"

int main(void)
{
	int choice,data,item,pos;
	node *start=NULL;
	while(1)
	{
		printf("\n ---------------------------------------------\n");
		printf("1.Insert_end 2.search 3.count 4.Display 5.Exit\n");
		printf("6.Insert_beginnig 7.Insert_after 8.Insert_before\n");
		printf("9.Insert_position 10.Delete node by data\n");
		printf("\n----------------------------------------------\n");
		printf("Enter your choice\n");
		scanf("%d",&choice);
		getchar();
		printf("\n----------------------------------------------\n");
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
			case 6:start=insert_beg(start);
			       break;

			case 7: printf("Enter the item you want insert after\n");
			       display_nodes(start);
			       scanf("%d",&item);
			       getchar();
			       start= insert_after(start,item);
			       break;

			case 8:printf("Enter the item you want insert before\n");
			       display_nodes(start);
			       scanf("%d",&item);
			       getchar();
			       start=insert_before(start,item);
			       break;
			case 9:printf("Enter the position u want to insert\n");
				display_nodes(start);
			       scanf("%d",&pos);
			       start=insert_pos(start,pos-1);
			       break;
			
			case 10:display_nodes(start);
			       printf("Enter the data you want to be deleted\n");
			       scanf("%d",&data);
			       getchar();
			       start=del_data(start,data);
			       break;

			default:printf("Invalid input\n");


		}
	}
}
