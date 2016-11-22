#include "main.h"

/**
 * @details change book information(book name, book author, book publisher)
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int ChangeBook(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	int status;
	int menu_select;
	int iCnt;
	printf("[D] Change_Book Function\n");
	printf("================================Change Book Menu========================================\n");
	printf("1.Book Name   2.Book Author   3.Book Publisher\n");
	printf("Input Change Menu number: ");
	scanf("%d%*c",&menu_select);

	if ( 0x01 == menu_select )
	{
		ChangeBookName(pt_bookPtr);
	}                              
	else if ( 0x02 == menu_select )
	{
		ChangeBookAuthor(pt_bookPtr);
	}
	else if ( 0x03 == menu_select )
	{
		ChangeBookPublisher(pt_bookPtr);
	}
	else             
	{                
		printf("[ERROR] Menu Select Error..\n");
		return -1;
	}

	return 0;
} 
