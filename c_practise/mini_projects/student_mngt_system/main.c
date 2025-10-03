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
		printf("|5 |Exit                            |\n");
		printf("|                                   |\n");
		printf("-------------------------------------\n");
		scanf("%hhu",&choice);
		
		if(choice < 1 || choice > 5)
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

			case 5:printf("Thank you\n");
			       exit(0);

			default:printf("Invalid input\n");
			//extra safety no need to write it
		}

	}
	return 0;
}
