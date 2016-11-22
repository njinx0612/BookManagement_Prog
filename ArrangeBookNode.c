#include "main.h"

/**
 * @details arrange book name
 * @author Dongki Bae
 * @date 2016.11.13
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int ArrangeBookNode(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	printf("\nArrange Book Function\n");
	pt_bookPtr -> cursor = pt_bookPtr -> tail;
	while ( 0 < strncmp(new -> bookName, pt_bookPtr -> cursor -> bookName, strlen(new -> bookName)) )
	{
		if ( NULL != pt_bookPtr -> cursor -> next )
		{
			pt_bookPtr -> cursor = pt_bookPtr -> cursor -> next;
		}
		else
		{
			printf("[D] Node to end\n");
			pt_bookPtr -> head = new;
			pt_bookPtr -> cursor -> next = new;
			new -> previous = pt_bookPtr -> cursor;
			new -> next = NULL;
			return 0;
		}
	}
	/* Insert node to front */
	if ( NULL == pt_bookPtr -> cursor -> previous )
	{
		printf("[D] Insert node to front\n");
		pt_bookPtr -> tail = new;
		pt_bookPtr -> cursor -> previous = new;
		new -> next = pt_bookPtr -> cursor;
		new -> previous = NULL;
		return 0;
	}
	else 
	{       
		/* Insert node to center */
		printf("[D] Insert node to center\n"); 
		new -> previous = pt_bookPtr -> cursor -> previous;
		pt_bookPtr -> cursor -> previous -> next = new;
		new -> next = pt_bookPtr -> cursor;
		pt_bookPtr -> cursor -> previous = new;
	}
	return 0;
}

