// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct book{
   char *title;
   char *author;
   float price;
}b;
int main() {
b *b1=NULL;
b1=malloc(sizeof(b));
if(b1 != NULL)
{
    int n,m;
    b1->title=NULL;
    printf("Enter the size of title\n");
    scanf("%d",&n);
    getchar();
    if (n <= 0) {
    printf("Invalid size entered.\n");
    free(b1);
    return 1;
}

    b1->title=malloc((n+1)*sizeof(char));
    if(b1->title != NULL)
    {
    printf("Enter the title\n");
    fgets(b1->title,n+1,stdin);
    b1->title[strcspn(b1->title,"\n")]='\0';
    b1->author=NULL;
    printf("Enter the size of author\n");
    scanf("%d",&m);
    getchar();
    if (m <= 0) {
    printf("Invalid size entered.\n");
    free(b1->title);
    free(b1);
    return 1;
}

    b1->author=malloc((m+1)*sizeof(char));
    if(b1->author != NULL)
    {
        printf("Enter the author name\n");
        fgets(b1->author,m+1,stdin);
        b1->author[strcspn(b1->author,"\n")]='\0';
        printf("Enter the price\n");
        scanf("%f",&b1->price);
        printf("The name of book %s\n",b1->title);
        printf("The name of Author %s\n",b1->author);
        printf("The price %.2f\n",b1->price);
    }
    else printf("Memory allocation failed at b1->author\n");
    }
    else printf("Memory allocation failed at b1->title\n");
}
else printf("Memory allocation failed at b1\n");
if(b1)
{
free(b1->author);
free(b1->title);
free(b1);
}
    return 0;
}
