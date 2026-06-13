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

void search_id(struct st *ptr,int n)
{
	while(ptr)
	{
		if(ptr->bid==n)
		{
			printf("\nBook ID:%d",ptr->bid);
			printf("\nBook Name:%s",ptr->bname);
			printf("\nAuthor Name:%s",ptr->aname);
			printf("\nNumber of Copies:%d\n",ptr->copies);
			return;
		}
		ptr=ptr->next;
	}
	printf("Book Not Found\n");
}
void search_name(struct st *ptr,char name[])
{
        while(ptr)
        {
                if(strcmp(ptr->bname,name)==0)
                {
                        printf("\nBook ID:%d",ptr->bid);
                        printf("\nBook Name:%s",ptr->bname);
                        printf("\nAuthor Name:%s",ptr->aname);
			printf("\nNumber of Copies:%d\n",ptr->copies);
                        return;
                }
                ptr=ptr->next;
        }
        printf("Book Not Found\n");
}
void search_author(struct st *ptr,char name[])
{
	int found=0;
        while(ptr)
        {
                if(strcmp(ptr->aname,name)==0)
                {
                        printf("\nBook ID:%d",ptr->bid);
                        printf("\nBook Name:%s",ptr->bname);
                        printf("\nAuthor Name:%s",ptr->aname);
			printf("\nNumber of Copies:%d\n",ptr->copies);
                        found=1;
                }
                ptr=ptr->next;
        }
	if(found==0)
        printf("Book Not Found\n");
}

void search_book(struct st *ptr)
{
	int op,n;
	char str[100];
	printf("1.By Book ID\n");
	printf("2.By Book Name\n");
	printf("3.By Author Name\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
		printf("Enter Book ID: ");
		scanf("%d",&n);
		search_id(ptr,n);
		break;

		case 2:
		printf("Enter Book Name:");
		scanf("%s",str);
		search_name(ptr,str);
		break;

		case 3:
		printf("Enter Author Name:");
		scanf("%s",str);
		search_author(ptr,str);
		break;
	}
}

