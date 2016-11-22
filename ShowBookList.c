#include "main.h"

int ShowBookList(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	int iCnt = 1;

	if ( NULL == pt_bookPtr -> tail )
	{
		printf("[RESULT] There is nothing book\n");
		return 0;
	}

	else
	{
		pt_bookPtr -> cursor = pt_bookPtr -> tail;
		printf("\n============================================================Book List============================================================\n");
		printf("|\t\tBook Name\t\t|\t\tBook Author\t\t|\t\tBook Publisher\t\t\t|\n");
		while ( NULL != pt_bookPtr -> cursor -> next )
		{
			printf("|[%d]. %-20s\t\t|  %-24s\t\t|  %-24s\t\t\t|\n",iCnt, pt_bookPtr -> cursor -> bookName, pt_bookPtr -> cursor -> bookAuthor, pt_bookPtr -> cursor -> bookPublisher);
			pt_bookPtr -> cursor = pt_bookPtr -> cursor -> next;
			iCnt++;
		}
		printf("|[%d]. %-20s\t\t|  %-24s\t\t|  %-24s\t\t\t|\n",iCnt, pt_bookPtr -> cursor -> bookName, pt_bookPtr -> cursor -> bookAuthor, pt_bookPtr -> cursor -> bookPublisher);
		printf("=================================================================================================================================\n");
		printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t        Total: %d\n", iCnt);
	}
	return 0;
} 
