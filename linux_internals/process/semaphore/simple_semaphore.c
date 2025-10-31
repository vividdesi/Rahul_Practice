#include<stdio.h>
#include<pthread.h>
#include<semaphore.h>

int counter=0;
sem_t sem;

void *increment(void *arg)
{
	for(int i=0;i<10;i++)
	{
		sem_wait(&sem);
		counter++;
		printf("i am id-%d\n",*((int *)arg));
		sem_post(&sem);
	}
	return NULL;
}

int main(void)
{
	pthread_t t1,t2;
	int id1=1,id2=2;
	sem_init(&sem,0,1);
	pthread_create(&t1,NULL,increment,&id1);
	pthread_create(&t2,NULL,increment,&id2);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	sem_destroy(&sem);
	printf("Final counter=%d\n",counter);
	return 0;
}
