#include<stdio.h>
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


void list_issued_books(struct issue *iptr)
{
	if(iptr==NULL)
	{
		printf("No Issued Books\n");
		return;
	}
	printf("\n-----------------------------------------\n");
        printf("BookID\tUserID\tUser Name\tIssueDate\tDue Date\tReturn Date\tFine Amount\n");

	while(iptr)
	{
		printf("%d\t%d\t\t%s\t%s\t%s\t%s\t%d\n",iptr->bookid,iptr->userid,iptr->username,iptr->issuedate,iptr->duedate,iptr->returndate,iptr->fine);
		iptr=iptr->next;
	}
}

