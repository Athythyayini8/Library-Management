#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct issue
{
	int bookid;
	int userid;
	char username[50];
	char issuedate[20];
	char duedate[20];
	char returndate[20];
	int fine;
	int returned;
	struct issue *next;
};
struct st
{
        int bid;
        char bname[100];
        char aname[100];
	int copies;
        struct st *next;
};



void issue_book(struct st *ptr,struct issue **iptr)
{
	int bid;
	time_t t;
	struct tm *info;
	printf("Enter Book ID:");
	scanf("%d",&bid);
	while(ptr)
	{
		if(ptr->bid==bid)
		{
			if(ptr->copies<=0){
			printf("Oops! Book is Not Available\n");
			return;
			}
			struct issue *temp;
			temp=malloc(sizeof(struct issue));
			printf("Enter User ID:\n");
			scanf("%d",&temp->userid);
			printf("Enter User Name:\n");
			scanf("%s",temp->username);
			temp->bookid=bid;
			t=time(NULL);
			info=localtime(&t);
			strftime(temp->issuedate,sizeof(temp->issuedate),"%d-%m-%Y",info);
			t=t+(7*24*60*60);
			info=localtime(&t);
			strftime(temp->duedate,sizeof(temp->duedate),"%d-%m-%Y",info);
			strcpy(temp->returndate,"Not Returned");
			temp->fine=0;
			temp->returned=0;
			ptr->copies--;
			temp->next=*iptr;
			*iptr=temp;
			printf("\n------------Book Issued Successfully-------------\n");
			printf("Issue Date:      %s\n",temp->issuedate);
			printf("Due Date:        %s\n",temp->duedate);
			printf("Remaining Copies:%d\n",ptr->copies);
			return;
		}
		ptr=ptr->next;
	}
	printf("SORRY!!! BOOK ID NOT FOUND :(\n");
}

i
