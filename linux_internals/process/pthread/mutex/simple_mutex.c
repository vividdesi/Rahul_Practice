#include<stdio.h>
#include<pthread.h>
#include<unistd.h>

int shared_data =0;

pthread_mutex_t lock;

void *thread_func(void *arg)
{
	int thread_id=*(int*)arg;

	for(int i=0;i < 10 ;i++)
	{
		pthread_mutex_lock(&lock);
		dprintf(1,"Thread %d has the lock, shared_data =%d\n",thread_id,shared_data);
		shared_data++;
		dprintf(1,"Thread %d updated shared_data to %d\n",thread_id,shared_data);
		pthread_mutex_unlock(&lock);
		sleep(1);
	}

	return NULL;
}

int main(void)
{
	pthread_t t1,t2;
	int id1=1,id2=2;

	pthread_mutex_init(&lock,NULL);

	pthread_create(&t1,NULL,thread_func,&id1);
	pthread_create(&t2,NULL,thread_func,&id2);

	pthread_join(t1,NULL);
	pthread_join(t2,NULL);

	pthread_mutex_destroy(&lock);

	dprintf(1,"Final shared_data value =%d\n",shared_data);

	return 0;
}

