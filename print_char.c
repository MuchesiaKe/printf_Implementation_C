#include "main.h"

/**
*print_char - copies character to buffer
*@buffer: memory to copy char to
*@c: character to be copied
*Return: count
*/

int print_char(char *buffer, va_list arg)
{
	int count = 0;
	char* str;

	str = va_arg(arg, char *);
	_strcpy(buffer, str);
	count++;
	return (count);
}
