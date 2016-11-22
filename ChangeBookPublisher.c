#include "main.h"

int ChangeBookPublisher(Book_Ptr_t* pt_bookPtr)
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
	printf("[CHANGE] Input book publisher to change: ");
	fgets(pt_bookPtr -> cursor -> bookPublisher, sizeof(pt_bookPtr -> cursor -> bookPublisher), stdin);
	/* remove enter(\n) */
	while ( '\n' != pt_bookPtr -> cursor -> bookPublisher[iCnt] )
	{
		iCnt++;
	}
	pt_bookPtr -> cursor -> bookPublisher[iCnt] = 0;
	return 0;
}
