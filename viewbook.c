#include<stdio.h>
struct st
{
        int bid;
        char bname[100];
        char aname[100];
        int copies;
        struct st *next;
};

void view_books(struct st *ptr)
{
	if(ptr==NULL)
	{
		printf("No Books Available\n");
		return;
	}
	printf("----------------------------------------------------\n");
        printf("Book ID\t  BookName  AuthorName     N0.of Copies\n");
        printf("----------------------------------------------------\n");
	while(ptr)
	{
		printf("%d\t  %s\t    %s\t           %d\t\n",ptr->bid,ptr->bname,ptr->aname,ptr->copies);
		ptr=ptr->next;
	}
}

