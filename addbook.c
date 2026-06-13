#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct st
{
        int bid;
        char bname[100];
        char aname[100];
	int copies;
        struct st *next;
};
static int r=1;


void addbook(struct st **ptr)
{
        struct st *temp=(struct st*)malloc(sizeof(struct st));
        temp->bid=r++;
        printf("Enter the data:\n");
        printf("Book ID:%d\n",temp->bid);
        printf("Enter Book Name:\n");
        scanf("%s",temp->bname);
        printf("Enter Author Name:\n");
        scanf("%s",temp->aname);
	printf("Enter Number of Copies:\n");
	scanf("%d",&temp->copies);
	printf("Debug qty:%d",temp->copies);
        temp->next=0;
        if(*ptr==NULL)
        {
                temp->next=NULL;
                *ptr=temp;
        }
        else
        {
                struct st *last=*ptr;
                while(last->next!=NULL)
                        last=last->next;
                        last->next=temp;
        }
	printf("Book Added Successfully!\n");
}


