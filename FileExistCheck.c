#include "main.h"

/**
 * @details file exist check and return file descriptor
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int FileExistCheck(char* file_Location)
{
	int file_Open_Descriptor;

	printf("[D] File Exist Check \n");
	file_Open_Descriptor = open(file_Location, O_RDONLY);
	if ( -1 == file_Open_Descriptor )
	{
		perror("[ERROR] File Exist Check Open");
		return -1;
	}
	return file_Open_Descriptor;
}

