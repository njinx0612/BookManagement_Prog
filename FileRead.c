#include "main.h"

/**
 * @detatils file read and insert linked list
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int FileRead(char* file_Location, int* file_Open_Descriptor, Book_Ptr_t* pt_bookPtr)
{
	int read_Descriptor;
	Book_Node_t* new = NULL;
	printf("[D] File Read \n");

	while (1)
	{
		new = BookMalloc();
		read_Descriptor = read(*file_Open_Descriptor, new, sizeof(Book_Node_t)); 
		printf("[D] read Des= %d\n", read_Descriptor);
		if ( 0 >= read_Descriptor )
		{
			perror("[ERROR] File Read");
			free(new);
			return -1;
		}
		LinkedBookNode(new, pt_bookPtr);
	}
	return 0;
}
