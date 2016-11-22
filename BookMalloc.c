#include "main.h"

/**
 * @details create book node using malloc function
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
Book_Node_t* BookMalloc(void)
{
	printf("[D] Book Malloc\n");
	Book_Node_t* new;
	new = NULL;
	new = (Book_Node_t*) malloc(sizeof(Book_Node_t));
	if ( NULL == new )
	{
		printf("[ERROR] Book malloc error\n");
		return NULL;
	}
	return new;
}
