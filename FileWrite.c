#include "main.h"

/**
 * @detatils file write to file open descriptor
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int FileWrite(int* file_Open_Descriptor, Book_Ptr_t* pt_bookPtr)
{
	int write_Descriptor;

	pt_bookPtr -> cursor = pt_bookPtr -> tail;
	if ( NULL == pt_bookPtr -> cursor )
	{
		printf("There is nothing book list\n");
		return -1;
	}
	while (1)
	{
		write_Descriptor = write(*file_Open_Descriptor, pt_bookPtr -> cursor, sizeof(Book_Node_t));
		if ( 0 > write_Descriptor )
		{
			perror("[ERROR]File Write");
			return -1;
		}
		if ( NULL != pt_bookPtr -> cursor -> next )
		{
			pt_bookPtr -> cursor = pt_bookPtr -> cursor -> next;
		}
		else
		{
			printf("File write finished..\n");
			return 0;
		}
	}
	return 0;
}
