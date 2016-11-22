#include "main.h"

/**
 * @datails insert book author to linked list
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
void InsertBookAuthor(Book_Node_t* new)
{
	int iCnt = 0;
	printf("Input Book Author: ");
	fgets(new -> bookAuthor, sizeof(new -> bookAuthor), stdin);
	while ( '\n' != new -> bookAuthor[iCnt] )
	{
		iCnt++;
	}
	new -> bookAuthor[iCnt] = 0;
}
