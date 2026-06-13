#include<stdio.h>
#include<stdlib.h>
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

void save_books(struct st *ptr,struct issue *iptr)
{
	FILE *fp;
	fp=fopen("file1.txt","w+");
	struct st *temp=ptr;
	fprintf(fp,"\n--------BOOK DETAILS-------\n");
	while(temp)
	{
		fprintf(fp,"\nBook ID             :%d",temp->bid);
		fprintf(fp,"\nBook Name           :%s",temp->bname);
		fprintf(fp,"\nAuthor Name         :%s",temp->aname);
		fprintf(fp,"\nAvailable Copies    :%d",temp->copies);
		temp=temp->next;
	}
	fclose(fp);

	fp=fopen("file2.txt","w+");
	struct issue *temp2=iptr;
	fprintf(fp,"\n----------ISSUED BOOK DETAILS--------\n");
	while(temp2)
	{
		fprintf(fp,"\nBook ID              :%d",temp2->bookid);
		fprintf(fp,"\nUser ID              :%d",temp2->userid);
		fprintf(fp,"\nUser Name            :%s",temp2->username);
		fprintf(fp,"\nIssue Date           :%s",temp2->issuedate);
		fprintf(fp,"\nDue Date             :%s",temp2->duedate);
		fprintf(fp,"\nReturn Date          :%s",temp2->returndate);
		fprintf(fp,"\nFine Amount          :Rs.%d",temp2->fine);
		fprintf(fp,"\nReturned             :%d",temp2->returned);
		temp2=temp2->next;
	}
	fclose(fp);
	printf("Data Saved Successfully\n");
}





