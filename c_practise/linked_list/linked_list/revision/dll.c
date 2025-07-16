#include"headerfile.h"

int main(void)
{	
	int choice;
	node *start=NULL;
	while(1)
	{
		printf("1.Insert_end\n2.Insert_begginning\n3.Insert_position\n4.Display\n");
		printf("5.exit\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:start=insert_end(start);break;
			case 2:start=insert_beg(start);break;
			case 3:start=insert_pos(start);break;
			case 4:display(start);break;
			case 5:printf("Thank you\n"); exit(0);
		}
	}

	return 0;
}
