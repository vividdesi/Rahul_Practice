#include<stdio.h>
#include<pthread.h>

int global=23;
void *my_func(void *arg)
{
	printf("This is Thread\n");
	printf("Trying to access the global value %d\n",global);
	printf("Modifying the global value\n");
	global=100;
	printf("The global value is %d\n",global);
	return NULL;
}

int main(void)
{

	pthread_t thread;

	printf("The global value in the main %d\n",global);
	if(pthread_create(&thread,NULL,my_func,NULL) != 0)
	{
		perror("Pthread allocation failed\n");
		return 1;
	}

	printf("The global value from main is %d\n",global);

	pthread_join(thread,NULL);

	printf("The global value from main is %d\n",global);
	printf("Thread finished execution\n");
	return 0;
}
