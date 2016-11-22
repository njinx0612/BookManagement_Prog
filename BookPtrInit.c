#include "main.h"

/**
 * @details struct book node pointer init function
 * @author Dongki Bae
 * @date 2016.11.11
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int BookPtrInit(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	printf("[D] Book_Ptr_Init Function\n");
	pt_bookPtr -> head = NULL;
	pt_bookPtr -> tail = NULL;
	pt_bookPtr -> cursor = NULL;
	return 0;
}
