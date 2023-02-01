#include "main.h"

/**
 * print_oct - converts integer to octal value and stores in provided buffer
 *
 * @buffer: buffer to store the converted integer
 * @arg: integer argument to be converted
 *
 * Return: number of characters in the converted integer
 */
int print_oct(char *buffer, va_list arg)
{
	long int num,  count = 0;
	char *tmp;

	tmp = malloc(sizeof(char) * 1024);
	num = va_arg(arg, long int);
	
	_itoa (num, tmp, 8);
	_strcpy (buffer, tmp);
	count = _strlen(tmp);

	free (tmp);
	return (count);
}

/**
 * print_uint - converts integer to its unsigned value and
 * stores in provided buffer
 *
 * @buffer: buffer to store the converted integer
 * @arg: integer argument to be converted
 *
 * Return: number of characters in the converted integer
 */
int print_uint(char *buffer, va_list arg)
{
        long int num,  count = 0;
        char *tmp;

        tmp = malloc(sizeof(char) * 1024);
        num = va_arg(arg, long int);

	if (num < 0)
		num = num + UINT_MAX + 1;
	
        _itoa (num, tmp, 10);
        _strcpy (buffer, tmp);
        count = _strlen(tmp);

        free (tmp);
        return (count);
}

/**
 * print_hex - converts integer to a hex value and stores in provided buffer
 *
 * @buffer: buffer to store the converted integer
 * @arg: integer argument to be converted
 *
 * Return: number of characters in the converted integer
 */
int print_hex(char *buffer, va_list arg)
{
        long int num,  count = 0;
        char *tmp;

        tmp = malloc(sizeof(char) * 1024);
        num = va_arg(arg, long int);

        _itoa (num, tmp, 16);
        _strcpy (buffer, tmp);
        count = _strlen(tmp);

        free (tmp);
        return (count);
}

/**
 * print_Hex - converts integer to a Hex value and stores in provided buffer
 *
 * @buffer: buffer to store the converted integer
 * @arg: integer argument to be converted
 *
 * Return: number of characters in the converted integer
 */
int print_Hex(char *buffer, va_list arg)
{
        long int num,  count = 0;
        char *tmp;

        tmp = malloc(sizeof(char) * 1024);
        num = va_arg(arg, long int);

        _itoa_Hex (num, tmp, 16);
        _strcpy (buffer, tmp);
        count = _strlen(tmp);

        free (tmp);
        return (count);
}

