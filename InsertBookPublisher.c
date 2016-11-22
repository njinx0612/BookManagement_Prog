#include "main.h"

/**
 * @details insert book publisher to linked list
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
void InsertBookPublisher(Book_Node_t* new)
{
	int iCnt = 0;
	printf("Input Book Publisher: ");
	fgets(new -> bookPublisher, sizeof(new -> bookPublisher), stdin);
	while ( '\n' != new -> bookPublisher[iCnt] )
	{
		iCnt++;
	}
	new -> bookPublisher[iCnt] = 0;

}
