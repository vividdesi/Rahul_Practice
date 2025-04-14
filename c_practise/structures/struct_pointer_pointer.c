// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct student{
    int x;
    int *y;
};
typedef struct teacher{
    int a;
    int b;
    struct student *s;
}t;

int main() {
    t *p=NULL;
    p=(t*)malloc(sizeof(t));
    if(p != NULL)
    {
        p->a=1;
        p->b=2;
        p->s=(struct student *)malloc(sizeof(*(p->s)));
        if(p->s != NULL)
        {
            
            p->s->x=3;
            p->s->y=(int*)malloc(sizeof(int));
            if(p->s->y != NULL)
            {
                *(p->s->y)=4;
             printf("%d %d %d %d\n",p->a,p->b,p->s->x,*(p->s->y));
            }
        
            
        }
        else
        {
            printf("Memory allocation failed\n");
            
        }
        
    }
    else
    {
        printf("Memory allocation failed\n");
        
    }
    
if(p !=NULL)
        {
             if(p->s->y != NULL)free(p->s->y);
            if(p->s!=NULL)free(p->s);
        free(p);
        }
    return 0;
}
