#include "main.h"

/**
 * @details insert book node
 * @author Dongki Bae
 * @date 2016.11.12
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int LinkedBookNode(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	int iCnt;
	printf("\nInsert_Book_Node Function\n");

	if ( '\n' == new -> bookName[0] )
	{
		free(new);
		return 0;
	}

	if ( NULL == pt_bookPtr -> head )
	{
		printf("\n[D] Head is NULL\n");
		pt_bookPtr -> head = new;
		pt_bookPtr -> tail = new;
		pt_bookPtr -> cursor = new;
		new -> next = NULL;
		new -> previous = NULL;
	}
	else
	{
		printf("\n[D] Head is not NULL\n");
		OverlapBookCheck(new, pt_bookPtr); // Check same book name
		ArrangeBookNode(new, pt_bookPtr);
		while ( NULL != pt_bookPtr -> head -> next )
		{
			printf("[D] Head's Book Name: %s\n", pt_bookPtr -> head -> bookName);
			pt_bookPtr -> head = pt_bookPtr -> tail -> next;
		}
	}
	return 0;
}

