#include "main.h"

/**
 * @details check a same book name
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int OverlapBookCheck(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	int iCnt = 0;
	printf("\nCheck Overlap Book Name\n");

	pt_bookPtr -> cursor = pt_bookPtr -> tail;
	while (strncmp(new -> bookName, pt_bookPtr -> cursor -> bookName, strlen(new -> bookName)) )
	{
		if ( NULL != pt_bookPtr -> cursor -> next )
		{
			pt_bookPtr -> cursor = pt_bookPtr -> cursor -> next;
		}
		else
		{
			printf("There is not overlap book name!!\n");
			return 0;
		}
	}
	printf("There is overlap book name!!\n");
	printf("Input New Book Name: ");
	fgets(new -> bookName, sizeof(new -> bookName), stdin);
	while ( '\n' != new -> bookName[iCnt] )
	{
		iCnt++;
	}
	new -> bookName[iCnt] = 0;
	return 0;
}
