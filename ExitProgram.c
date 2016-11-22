#include "main.h"

int ExitBookProgram(char* file_Location, Book_Ptr_t* pt_bookPtr)
{
	int file_Open_Descriptor;
	printf("Finished a book management program\n");
	file_Open_Descriptor = FileOpen(file_Location);
	FileWrite(&file_Open_Descriptor, pt_bookPtr);
	exit(1);
}
