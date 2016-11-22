#include "main.h"

/**
 * @details insert book information(book name, book author, book publisher)
 * @author Dongki Bae
 * @date 2016.11.16
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int InsertBookInfo(Book_Node_t* new)
{
	InsertBookName(new);
	if ( '\n' == new -> bookName[0] )
	{
		return 0;
	}
	InsertBookAuthor(new);
	InsertBookPublisher(new);
	return 0;
}
