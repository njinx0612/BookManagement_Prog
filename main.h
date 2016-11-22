#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h> // open function
#include <unistd.h> // write function

typedef struct Book_Node_t
{
	char bookName[100];
	char bookAuthor[100];
	char bookPublisher[100];
	struct Book_Node_t* previous;
	struct Book_Node_t* next;
}Book_Node_t;

typedef struct Book_Ptr_t
{
	struct Book_Node_t* head;
	struct Book_Node_t* tail;
	struct Book_Node_t* cursor;
}Book_Ptr_t;

void ShowManagementMenu(void);
int BookPtrInit(Book_Node_t*, Book_Ptr_t*);
int ShowBookList(Book_Node_t*, Book_Ptr_t*); 
Book_Node_t* BookMalloc(void);
int ExitBookProgram(char*, Book_Ptr_t*);

int AddBook(Book_Node_t*, Book_Ptr_t*);
int LinkedBookNode(Book_Node_t*, Book_Ptr_t*);
int InsertBookInfo(Book_Node_t*);
void InsertBookName(Book_Node_t*);
void InsertBookAuthor(Book_Node_t*);
void InsertBookPublisher(Book_Node_t*);
int OverlapBookCheck(Book_Node_t*, Book_Ptr_t*);
int ArrangeBookNode(Book_Node_t*, Book_Ptr_t*);

int FindBook(Book_Node_t*, Book_Ptr_t*); 
int DeleteBook(Book_Node_t*, Book_Ptr_t*); 
int ChangeBook(Book_Node_t*, Book_Ptr_t*); 
int ChangeBookName(Book_Ptr_t*);
int ChangeBookAuthor(Book_Ptr_t*);
int ChangeBookPublisher(Book_Ptr_t*);

int FileExistCheck(char*);
int FileRead(char*, int*, Book_Ptr_t*);
int FileWrite(int*, Book_Ptr_t*);
int FileOpen(char*);

