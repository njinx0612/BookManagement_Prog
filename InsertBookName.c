#include "main.h"

/**
 * @details insert book name to linked list
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
void InsertBookName(Book_Node_t* new)
{
	int iCnt = 0;
	printf("Input Book Name: ");
	fgets(new -> bookName, sizeof(new -> bookName), stdin);
	
	while ( '\n' != new -> bookName[iCnt] )
	{
		iCnt++;
	}

	if ( 0 != iCnt )
	{
		new -> bookName[iCnt] = 0;
	}
}
