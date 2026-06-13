#include<stdio.h>
#include<string.h>
struct st
{
        int bid;
        char bname[100];
        char aname[100];
	int copies;
        struct st *next;
};

void remove_id(struct st **ptr,int n)
{
	struct st *temp=*ptr,*prev=NULL;
	while(temp)
	{
		if(temp->bid==n)
		{
			if(prev==NULL)
				*ptr=temp->next;
			else
				prev->next=temp->next;
			printf("Deleted Successfully!!!\n");
			return;
		}
		prev=temp;
		temp=temp->next;
	}
	printf("-----Book ID Not Found------\n");
}

void remove_name(struct st **ptr,char name[])
{
	struct st *temp=*ptr,*prev=NULL;
	while(temp)
	{
		if(strcmp(temp->bname,name)==0)
		{
			if(prev==NULL)
				*ptr=temp->next;
			else
				prev->next=temp->next;
			printf("Deleted Successfully!!!\n");
			return;
		}
		prev=temp;
		temp=temp->next;
	}
	printf("-----Book Not Found-----\n");
}

void remove_book(struct st **ptr)
{
	int op,n;
	char str[100];
	printf("1.By Book ID\n");
	printf("2.By Book Name\n");
	scanf("%d",&op);

	switch(op)
	{
		case 1:
		printf("Enter Book ID: ");
		scanf("%d",&n);
		remove_id(ptr,n);
		break;

		case 2:
		printf("Enter Book Name: ");
		scanf("%s",str);
		remove_name(ptr,str);
		break;
	}
}
