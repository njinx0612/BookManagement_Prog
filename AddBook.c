#include "main.h"

int AddBook (Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	new = BookMalloc();
	InsertBookInfo(new);
	LinkedBookNode(new, pt_bookPtr); 
	return 0;
}
