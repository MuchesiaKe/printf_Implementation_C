#include "main.h"

/**
 * print_str - copies a string to a buffer
 *
 * @buffer: the buffer to store the string
 * @arg: the string to be copied
 *
 * Return: number of characters copied
 */

int print_str(char *buffer, va_list arg)
{
	int count = 0; 
	char *str;

	str = va_arg(arg, char *);
	_strcpy(buffer, str);
	count = _strlen(str);
	

	return (count);
}


int print_int(char *buffer, va_list arg)
{
	int tmp_int, count = 0;
	char *str;

	str = malloc(sizeof(char) * 1024);
	tmp_int = va_arg(arg, int);

        _itoa(tmp_int, str, 10);
        _strcpy(buffer, str);
        count = _strlen(str);

	free(str);
        return (count);
}

int print_dec(char *buffer, va_list arg)
{
	int count;
	
        char *str;

        str = va_arg(arg, char *);
        _strcpy(buffer, str);
        count = _strlen(str);
        return (count);
}
