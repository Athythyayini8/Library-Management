# Library-Management
# Library Management System

 Project Overview

The Library Management System is a menu-driven application developed in C programming language to automate basic library operations. The system allows users to manage book records efficiently by providing functionalities such as adding new books, updating book details, removing books, searching books, issuing books, returning books, maintaining available copies, calculating fines for late returns, and storing records permanently using file handling.

The project uses Linked List data structure for dynamic storage of book records and incorporates Date and Time functions to automate issue date, due date, return date, and fine calculation processes.

 Objectives

* To maintain library book records efficiently.
* To automate book issue and return operations.
* To track the availability of book copies.
* To generate issue and due dates automatically.
* To calculate fines for overdue books.
* To store library records permanently using file handling.

 Features

 1. Add New Book

* Automatically generates a unique Book ID.
* Stores Book Name, Author Name, and Number of Copies.
* Inserts the record into the linked list dynamically.

 2. Update Book Details

* Update book information using:

  * Book ID
  * Book Name

 3. Remove Book

* Delete a book record using:

  * Book ID
  * Book Name

 4. Search Book

* Search books by:

  * Book ID
  * Book Name
  * Author Name

 5. View All Books

* Displays all books available in the library.
* Shows Book ID, Book Name, Author Name, and Available Copies.

 6. Issue Book

* Issues a book to a user.
* Automatically generates Issue Date.
* Automatically generates Due Date (7 days from Issue Date).
* Reduces available copy count.

 7. Return Book

* Return using Book ID or User ID.
* Automatically generates Return Date.
* Increases available copy count.
* Calculates fine for delayed returns.

 8. Fine Calculation

* Due Date = Issue Date + 7 Days
* Fine = ₹20 per day after Due Date

 9. List Issued Books

* Displays all currently issued books.
* Shows Issue Date and Due Date details.

 10. Save Records

* Saves all book records to a text file.
* Allows permanent storage of data.

 Technologies Used

* Programming Language: C
* Data Structure: Singly Linked List
* Concepts Used:

  * Structures
  * Pointers
  * Dynamic Memory Allocation
  * File Handling
  * Date and Time Functions
  * Modular Programming

 Data Structure Used

struct st
{
    int bid;
    char bname[100];
    char aname[100];
    int copies;
    struct st *next;
};

The linked list enables dynamic storage and efficient insertion and deletion of book records.

 Date and Time Functions Used

Header File:

#include <time.h>

Functions Used:

* time()
* localtime()
* strftime()
* difftime()

Purpose:

* Generate Issue Date automatically
* Generate Due Date automatically
* Generate Return Date automatically
* Calculate overdue days and fine amount

 File Handling

Functions Used:

* fopen()
* fprintf()
* fscanf()
* fclose()

Purpose:

* Store book records permanently.
* Save issued book information.
* Retrieve records when required.

 Sample Workflow

1. Add books to the library.
2. View available books.
3. Issue a book to a user.
4. System generates Issue Date and Due Date.
5. User returns the book.
6. System calculates fine if the due date is exceeded.
7. Records are saved into a file.

 Advantages

* Dynamic memory allocation.
* Easy book management.
* Automatic date generation.
* Automatic fine calculation.
* Permanent record storage.
* User-friendly menu-driven interface.

 Future Enhancements

* User login authentication.
* Multiple librarian support.
* Database integration.
* GUI-based application.
* Email/SMS due date reminders.
* Report generation and analytics.

 Conclusion

The Library Management System successfully automates various library operations such as maintaining book records, issuing and returning books, tracking available copies, generating due dates, and calculating fines. The project demonstrates practical implementation of Linked Lists, Structures, File Handling, Dynamic Memory Allocation, and Date-Time functions in C programming, making it an efficient and reliable library management solution.
