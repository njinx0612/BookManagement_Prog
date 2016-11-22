#include "main.h"

/**
 * @details book add, delete etc..
 * @author Dongki Bae
 * @date 2016.11.11
 * @version 0.0.1
 * @todo remove temp test code
 * @bug nothing
 */
int main (int argc, char* argv[])
{
	int select_menu;
	int file_Exist_Descriptor;
	int file_Open_Descriptor;
	int (*pf_call_Menu[6]) (Book_Node_t*, Book_Ptr_t*) = {BookPtrInit, AddBook, DeleteBook, ChangeBook, FindBook, ShowBookList};
	Book_Ptr_t pt_bookPtr;
	Book_Node_t* new;
	pf_call_Menu[0](new, &pt_bookPtr);

	if ( 1 >= argc )
	{
		if( 1 == argc )
		{
			printf("\nArgument Error...!! Please retry and read manual...\n\n");
			//printf("=======================Using Manual=======================\n");
			printf("Usage:\n");
			printf("\t ./[execution file name] [create file location+file name]\n\n");
			printf("\t ex) ./book_Management ./book_info.txt\n\n");
			exit(1);
		}
	}

	file_Exist_Descriptor = FileExistCheck(argv[1]);
	if ( -1 != file_Exist_Descriptor )
	{
		FileRead (argv[1], &file_Exist_Descriptor, &pt_bookPtr);
	}

	while (1)
	{
		ShowManagementMenu();
		printf("\nselect the menu: ");
		scanf("%d%*c", &select_menu);

		if ( 0x01 <= select_menu && 0x05 >= select_menu )
		{
			pf_call_Menu[select_menu](new ,&pt_bookPtr);
		}
		else if ( 0x09 == select_menu )
		{
			ExitBookProgram(argv[1], &pt_bookPtr);
			break;
		}
		else 
		{
			continue;
		}
	}

	// Temp test code -- 16.11.11 -Dongki Bae
	pt_bookPtr.cursor = pt_bookPtr.tail;	
	printf("\nShow Linked List\n");

	if ( pt_bookPtr.tail != NULL )
	{
		while ( NULL != pt_bookPtr.cursor -> next )
		{
			printf("%s => ", pt_bookPtr.cursor -> bookName);
			pt_bookPtr.cursor = pt_bookPtr.cursor -> next;
		}
		printf("%s\n", pt_bookPtr.cursor -> bookName);
	}
	return 0;
}
