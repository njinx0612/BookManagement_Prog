#include "main.h"

int ChangeBookAuthor(Book_Ptr_t* pt_bookPtr)
{
	int status;
	int iCnt = 0;
	Book_Node_t* new;
	status = FindBook(new, pt_bookPtr);
	if ( 0 > status )
	{
		printf("[ERROR] Find book Error..\n");
		return -1;
	}
	printf("[CHANGE] Input book author to change: ");
	fgets(pt_bookPtr -> cursor -> bookAuthor, sizeof(pt_bookPtr -> cursor -> bookAuthor), stdin);
	/* remove enter(\n) */
	while ( '\n' != pt_bookPtr -> cursor -> bookAuthor[iCnt] )
	{
		iCnt++;
	}
	pt_bookPtr -> cursor -> bookAuthor[iCnt] = 0;
	return 0;
}
