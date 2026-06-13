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


void return_book(struct st *ptr,struct issue *iptr)
{
	int bid,uid;
	printf("Enter Book ID:");
	scanf("%d",&bid);
	printf("Enter User ID:");
	scanf("%d",&uid);

	while(iptr)
	{
		if(iptr->bookid==bid&&iptr->userid&&iptr->returned==0)
		{
			time_t t=time(NULL);
			struct tm *info=localtime(&t);
			strftime(iptr->returndate,sizeof(iptr->returndate),"%d-%m-%Y",info);
			iptr->returned=1;

			int d,m,y;
			sscanf(iptr->duedate,"%d-%d-%d",&d,&m,&y);
			struct tm due={0};
			due.tm_mday=d;
			due.tm_mon=m-1;
			due.tm_year=y-1900;
			time_t due_tm=mktime(&due);
			int late=difftime(t,due_tm)/(24*60*60);
			if(late>0)
				iptr->fine=late*20;
			else
				iptr->fine=0;

			struct st *temp=ptr;
			while(temp)
			{
				if(temp->bid==bid)
				{
					temp->copies++;
					break;
				}
				temp=temp->next;
			}
			printf("\n-------Book Returned Successfully------\n");
			printf("Return Date:     %s\n",iptr->returndate);
			printf("Fine Amount:  Rs.%d\n",iptr->fine);
			printf("Available Copies:%d\n",temp->copies);
			return;
		}
		iptr=iptr->next;
	}
	printf("RECORD NOT FOUND\n");
}

