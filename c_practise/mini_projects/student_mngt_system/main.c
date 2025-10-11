#include<stdio.h>
#include"header.h"
#include<stdint.h>
#include<stdlib.h>

int main(void)
{
	student *start=NULL;
	//created the head of the linked list with NULL
	
	uint8_t choice;

	while(1)
	{
		printf("-------------------------------------\n");
		printf("|          ----Menu----             |\n");
		printf("|1 |Create students list            |\n");
		printf("|2 |Add_student                     |\n");
		printf("|3 |Display_students                |\n");
		printf("|4 |calculate grades of students    |\n");
		printf("|5 |Insert modes                    |\n");
		printf("|6 |Delete modes                    |\n");
		printf("|7 |Exit                            |\n");
		printf("|                                   |\n");
		printf("-------------------------------------\n");
		scanf("%hhu",&choice);
		
		if(choice < 1 || choice > 7)
		{
			printf("Invalid input\n");
			continue;
		}

		switch(choice)
		{
			case 1:uint8_t size;
			       printf("Enter the number of students you want to add\n");
			       scanf("%hhu",&size);
			       start=add_student(start,size);
			       break;

			case 2:start=add_student(start,1);break;

			case 3:display_students(start); break;

			case 4:calculate_grade(start); break;

			case 5:uint8_t sec;
			       printf("Enter the Insert mode\n");
			       printf("1.Insert_begin 2.Insert_end 3.Insert_position\n");
			       scanf("%hhu",&sec);
			       if (sec >= 1 && sec <= 3) {
				       start = insert_fun[sec - 1](start);
			       } else {
				       printf("Invalid option!\n");
			       }

			       break;
			case 6:printf("Enter the delete mode\n");
			       printf("1.Delete_beginning 2.Delete_end 3.Delete_at_position\n");
			       scanf("%hhu",&sec);
			       if(sec >= 1 && sec <=3)
			       {
				       start=del_fun[sec-1](start);
			       }
			       else
			       {
				       printf("Invalid option!\n");
			       }
			       break;

			case 7:printf("Thank you\n");
			       free_all_nodes(start);
			       exit(0);

			default:printf("Invalid input\n");
			//extra safety no need to write it
		}

	}
	return 0;
}
