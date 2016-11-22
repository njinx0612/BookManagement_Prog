#include "main.h"

/**
 * @details delete book information
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int DeleteBook(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	int status;
	int menu_select;
	printf("[D] Delete_Book Function\n");
	status = FindBook(new, pt_bookPtr);
	if ( 0 > status )
	{       
		printf("[ERROR] Find book Error..\n");
		return -1;
	}
	/* First Node Delete */
	if ( NULL == pt_bookPtr -> cursor -> previous && NULL != pt_bookPtr -> cursor -> next )
	{
		pt_bookPtr -> tail = pt_bookPtr -> cursor -> next;
		pt_bookPtr -> cursor -> next -> previous = NULL;
		pt_bookPtr -> cursor -> next = NULL;
		free(pt_bookPtr -> cursor);
	}
	/* End Node Delete */
	else if ( NULL == pt_bookPtr -> cursor -> next && NULL != pt_bookPtr -> cursor -> previous )
	{
		pt_bookPtr -> head = pt_bookPtr -> cursor -> previous;
		pt_bookPtr -> cursor -> previous -> next = NULL;
		pt_bookPtr -> cursor -> previous = NULL;
		free(pt_bookPtr -> cursor);
	}
	/* One Node Delete */
	else if ( NULL == pt_bookPtr -> cursor -> next && NULL == pt_bookPtr -> cursor -> previous )
	{
		printf("[D] Node is One\n");
		free(pt_bookPtr -> cursor);
		pt_bookPtr -> head = NULL;
		pt_bookPtr -> tail = NULL;
	}
	/* Center Node Delete */
	else
	{
		pt_bookPtr -> cursor -> previous -> next = pt_bookPtr -> cursor -> next;
		pt_bookPtr -> cursor -> next -> previous = pt_bookPtr -> cursor -> previous;
		pt_bookPtr -> cursor -> previous = NULL;
		pt_bookPtr -> cursor -> next = NULL;
		free(pt_bookPtr -> cursor);
	}
	return 0;
}
