#include "main.h"

/**
 * @details file open write only and remove before writing data
 * @author Dongki Bae
 * @date 2016.11.15
 * @version 0.0.1
 * @todo nothing
 * @bug nothing
 */
int FileOpen(char* file_Location)
{
	int file_Open_Descriptor;

	printf("[D] File Open \n");
	file_Open_Descriptor = open(file_Location, O_CREAT|O_TRUNC|O_WRONLY,0644);

	if ( 0 > file_Open_Descriptor )
	{
		perror("[ERROR] File Open");
		return -1;
	}
	return file_Open_Descriptor;
}
