#include<stdio.h>
#include<pthread.h>

void * display(void *arg)
{
	//int arr[]={1,2,3,4,5};
	printf("The display thread\n");
	for(int i=0;i<5;i++)printf("%d ",*((int*)arg+i));
	printf("\n");
	return NULL;
}


void * add_array(void *arg)
{
	printf("The add_array thread\n");
	int sum=0;
	printf("Adding the sum from array values\n");
	for(int i=0;i<5;i++)sum +=*((int *)arg+i);
	printf("The sum value is %d\n",sum);
	return NULL;
}


int main(void)
{

	pthread_t thread1,thread2;

	int arr[]={1,2,3,4,5};

	if(pthread_create(&thread1,NULL,display,arr) != 0)
	{
		perror("pthread creation failed\n");
		return 1;
	}

	if(pthread_create(&thread2,NULL,add_array,arr) != 0)
	{
		perror("pthread creation failed\n");
		return 1;
	}

	pthread_join(thread1,NULL);
	pthread_join(thread2,NULL);

	printf("Threads execution completed\n");
	return 0;

}
