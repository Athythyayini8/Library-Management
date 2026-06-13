#include<stdio.h>
struct st 
{
	int bid;
	char bname[100];
	char aname[100];
	int copies;
	struct st *next;
};
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

void addbook(struct st **ptr);
void update_book(struct st **ptr);
void remove_book(struct st **ptr);
void search_book(struct st *ptr);
void view_books(struct st *ptr);
void issue_book(struct st *ptr,struct issue **iptr);
void return_book(struct st *ptr,struct issue *iptr);
void list_issued_books(struct issue *iptr);
void save_books(struct st *ptr,struct issue*iptr);


int main()
{
	struct st *hptr=0;
	struct issue *iptr=0;
	int op;
	char ch;
	while(1)
	{
	printf("-----------------------------------------\n");
	printf("\tBOOK MANAGEMENT SYSTEM\n");
	printf("-----------------------------------------\n");
	printf("  1.Add New Book\n");
	printf("  2.Update Book Details\n");
	printf("  3.Remove Book\n");
	printf("  4.Search Book\n");
	printf("  5.View All Vooks\n");
	printf("  6.Issue Book\n");
	printf("  7.Return Book\n");
	printf("  8.List Issued Books\n");
	printf("  9.Save\n");
	printf("  10.Exit\n");
	printf("--------------------------------------------\n");
	printf("Enter the Option:\n");
	scanf("%d",&op);
	switch(op)
	{
		case 1:
		addbook(&hptr);
		break;

		case 2:
		update_book(&hptr);
		break;

		case 3:
		remove_book(&hptr);
		break;

		case 4:
		search_book(hptr);
		break;

		case 5:
		view_books(hptr);
		break;

		case 6:
		issue_book(hptr,(&iptr));
		break;

		case 7:
		return_book(hptr,iptr);
		break;

		case 8:
		list_issued_books(iptr);
		break;

		case 9:
		save_books(hptr,iptr);
		break;

		case 10:
		printf("Do you want to save and exit(y/n):\n");
                scanf(" %c",&ch);
                if(op=='y')
                {
                save_books(hptr,iptr);
                goto label;
                }
                else
		       	goto label;
                break;

                default:
                printf("Invalid Option:\n");

	}
	}
label:
	printf("***********PROCESS COMPLETED SUCCESSFULLY*************\n");
}

