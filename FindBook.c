#include "main.h"

/**
 * @details find a book from book name, book author, book publisher
 * @author Dongki Bae
 * @date 2016.11.14
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */

int FindBook(Book_Node_t* new, Book_Ptr_t* pt_bookPtr)
{
	char find_Bookname[100] = {0};
	char find_Bookauthor[100] = {0};
	char find_Bookpublisher[100] = {0};
	int iCnt;
	int menu_Select;
	printf("[D] Find_Book Function\n");
	printf("\n==================Find Book Menu==============\n");
	printf("1.Book Name   2.Book Author   3.Book Publisher\n");
	printf("Input Menu number: ");
	scanf("%d%*c", &menu_Select);
	if ( 0x01 == menu_Select )
	{
		pt_bookPtr -> cursor = pt_bookPtr -> tail;
		iCnt = 0;
		if ( NULL == pt_bookPtr -> tail )
		{
			printf("Nothing Book list\n");
			return -2;
		}
		printf("[FIND] Input Book Name: ");
		fgets(find_Bookname, sizeof(find_Bookname), stdin);
		/* remove enter(\n) */
		while ( '\n' != find_Bookname[iCnt] )
		{              
			iCnt++;
		}
		find_Bookname[iCnt] = 0;
		while ( strncmp(pt_bookPtr -> cursor -> bookName, find_Bookname, strlen(find_Bookname)) )
		{
			if ( NULL != pt_bookPtr -> cursor -> next )
			{
				pt_bookPtr -> cursor = pt_bookPtr -> cursor -> next;
			}
			else
			{
				printf("\nDo not match the book name!!\n");
				return -1;
			}
		}
	}
	else if ( 0x02 == menu_Select )
	{
		pt_bookPtr -> cursor = pt_bookPtr -> tail;
		iCnt = 0;
		if ( NULL == pt_bookPtr -> tail )
		{
			printf("Nothing Book list\n");
			return -2;
		}
		printf("[FIND] Input Book Author: ");
		fgets(find_Bookauthor, sizeof(find_Bookauthor), stdin);
		/* remove enter(\n) */
		while ( '\n' != find_Bookauthor[iCnt] )
		{              
			iCnt++;
		}
		find_Bookauthor[iCnt] = 0;
		while ( strncmp(pt_bookPtr -> cursor -> bookAuthor, find_Bookauthor, strlen(find_Bookauthor)) )
		{
			if ( NULL != pt_bookPtr -> cursor -> next )
			{
				pt_bookPtr -> cursor = pt_bookPtr -> cursor -> next;
			}
			else
			{
				printf("Do not match the book name!!\n");
				return -1;
			}
		}
	}
	else if ( 0x03 == menu_Select )
	{
		pt_bookPtr -> cursor = pt_bookPtr -> tail;
		iCnt = 0;
		if ( NULL == pt_bookPtr -> tail )
		{
			printf("Nothing Book list\n");
			return -2;
		}
		printf("[FIND] Input Book Publisher: ");
		fgets(find_Bookpublisher, sizeof(find_Bookpublisher), stdin);
		/* remove enter(\n) */
		while ( '\n' != find_Bookpublisher[iCnt] )
		{              
			iCnt++;
		}
		find_Bookpublisher[iCnt] = 0;
		while ( strncmp(pt_bookPtr -> cursor -> bookPublisher, find_Bookpublisher, strlen(find_Bookpublisher)) )
		{
			if ( NULL != pt_bookPtr -> cursor -> next )
			{
				pt_bookPtr -> cursor = pt_bookPtr -> cursor -> next;
			}
			else
			{
				printf("Do not match the book name!!\n");
				return -1;
			}
		}
	}
	else
	{
		printf("[ERROR] Menu select error!!\n");
		return -1;
	}

	printf("=======================================================================================================\n");
	printf("Name: %s\t\t Author: %s\t\t Publisher: %s\n",pt_bookPtr -> cursor -> bookName, pt_bookPtr -> cursor -> bookAuthor, pt_bookPtr -> cursor -> bookPublisher);
	printf("=======================================================================================================\n");
	return 0;
}
