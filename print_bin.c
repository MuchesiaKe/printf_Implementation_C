#include "main.h"

/**
 *_abs - Computes the absolute value of an integer
 *
 *@a: The integer to be computed.
 *
 * Return: The absolute value of a.
 */

int _abs(int a)
{
	if (a >= 0)
		return (a);
	else
		return (-a);
}

/**
 * print_bin - prints unsigned int as binary string
 *
 * @buffer: memory to store binary string
 * @arg: unsigned int
 *
 * Return: number of characters in the string
 */

int print_bin(char *buffer, va_list arg)
{
	int y, count = 0;
	unsigned int x;
	char *tmp;

	tmp = malloc(sizeof(char) * 1024);


	x = va_arg(arg, unsigned int);
	if (x > INT_MAX)
	{
		y = _abs (x - (UINT_MAX + 1));
	}
	else
		y = x;
	_itoa (y, tmp, 2);
	_strcpy(buffer, tmp);

	count = _strlen(tmp);
	free(tmp);

	return (count);
}

