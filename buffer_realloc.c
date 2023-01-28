#include <stdlib.h>

/**
*buffer_realloc - resizes buffer
*@buffer: memory block to be resized
*Return: pointer to the new memory block
*/

char* buffer_handler(char *buffer)
{
	char *tmp;

	tmp = realloc(buffer, sizeof(char));
	if(tmp == NULL)
		free(buffer);
	else
		buffer = tmp;
	return (buffer);
}
