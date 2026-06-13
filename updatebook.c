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

void update_id(struct st **ptr,int n)
{
	struct st *temp=*ptr;
	int op;
	while(temp)
	{
		if(temp->bid==n)
		{
			printf("1.Book Name\n");
			printf("2.Author Name\n");
			printf("3.Copies\n");
			printf("Enter Option");
			scanf("%d",&op);
			switch(op)
			{
				case 1:
					printf("Enter New Book Name:");
					scanf("%s",temp->bname);
					break;

				case 2:
					printf("Enter New Author Name:");
					scanf("%s",temp->aname);
					break;

				case 3:
					printf("Enter Number of  Copies:");
					scanf("%d",&temp->copies);
					break;
			}
			printf("Updated Successfully!!!\n");
			return;
		}
		temp=temp->next;
	}
	printf("Book ID not Found\n");
}


void update_name(struct st **ptr,char name[])
{
	struct st *temp=*ptr;
	int op;
	while(temp)
	{
		if(strcmp(temp->bname,name)==0)
		{
			printf("1.Book Name\n");
                        printf("2.Author Name\n");
                        printf("3.Copies\n");
			printf("Enter the Option:");
			scanf("%d",&op);
			switch(op)
			{
				case 1:
					printf("Enter New Book Name:");
					scanf("%s",temp->bname);
					break;

				case 2:
					printf("Enter New Author Name:");
					scanf("%s",temp->aname);
					break;

				case 3:
					printf("Enter Number of Copies:");
					scanf("%d",&temp->copies);
					break;
			}
			printf("Updated Successfully!!!!\n");
			return;
		}
		temp=temp->next;
	}
	printf("Book Not Found\n");
}

void update_book(struct st **ptr)
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
		update_id(ptr,n);
		break;

		case 2:
		printf("Enter Book Name: ");
		scanf("%s",str);
		update_name(ptr,str);
		break;

	}
}

