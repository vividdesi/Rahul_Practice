#include<stdio.h>
#include<pthread.h>

void * my_func(void *arg)
{
	printf("The new thread created and the arg value is %d\n",*(int *)arg);

	return NULL;
	
}

int main(void)
{

	pthread_t thread;
	int arg=99;

	pthread_create(&thread,NULL,my_func,&arg);

	pthread_join(thread,NULL);

	printf("Thread finished execution\n");
	return 0;
}

