
void bubble_sort(int *p,int size)
{      
	int last_size=size-1,flag;
	int i,j,temp,last_swap;

	for(i=0;i<(size-1);i++)
	{
		flag=0;
		for(j=0;j<last_size;j++)
		{
			if(p[j] >p[j+1])
			{
				temp=*(p+j);
				*(p+j)=*(p+(j+1));
				*(p+(j+1))=temp;
				flag=1;
				last_swap=j;
			}
		}
		if(flag == 0)break;
		last_size=last_swap;
	}

}
