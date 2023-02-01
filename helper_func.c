#include "main.h"

/**
 *_strcmp - Compares two strings
 *
 *@s1: A pointer to the first string
 *@s2: A pointer to the second string
 *
 *Return: 0 if same, -ve if s1 < s2, +ve if s2 < s2
 */

int _strcmp(char *s1, const char *s2)
{
        while (*s1 && *s2 && *s1 == *s2)
        {
                s1++;
                s2++;
        }
        return (*s1 - *s2);
}

#include "main.h"

/**
 * _memcpy - function that copies memory area
 *
 * @dest: copy destination
 * @src: copy source
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 *
 */

char *_memcpy(char *dest, const char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	i++;
	return (dest);
}

/**
 * strrev - reverses a string
 *
 * @arr: string to be reversed
 * @start: beginning of the string
 * @end: end of the string
 */

void strrev(char *arr, int start, int end)
{
    char temp;

    if (start >= end)
        return;

    temp = *(arr + start);
    *(arr + start) = *(arr + end);
    *(arr + end) = temp;

    start++;
    end--;
    strrev(arr, start, end);
}

/**
 * _itoa - converts an integer to its ASCII value as a string
 * depending on the specified base
 *
 * @number: integer to be converted
 * @arr: string pointer to store converted integer
 * @base: base to convert the integer to
 *
 * Return: pointer to the resulting string
 */

char *_itoa(long int number, char *arr, int base)
{
	    long int i = 0, r, negative = 0;

    if (number == 0)
    {
        arr[i] = '0';
        arr[i + 1] = '\0';
        return arr;
    }

    if (number < 0 && base == 10)
    {
        number *= -1;
        negative = 1;
    }

    while (number != 0)
    {
        r = number % base;
        arr[i] = (r > 9) ? (r - 10) + 'a' : r + '0';
        i++;
        number /= base;
    }

    if (negative)
    {
        arr[i] = '-';
        i++;
    }

    strrev(arr, 0, i - 1);

    arr[i] = '\0';

    return arr;
}



/**
 * _itoa_Hex - converts an integer to its ASCII Hex value as a string
 *
 * @number: integer to be converted
 * @arr: string pointer to store converted integer
 * @base: base to convert the integer to
 *
 * Return: pointer to the resulting string
 */

char *_itoa_Hex(long int number, char *arr, int base)
{
	long int i = 0, r, negative = 0;

    	if (number == 0)
    	{
        	arr[i] = '0';
        	arr[i + 1] = '\0';
        	return arr;
    	}

    	if (number < 0 && base == 10)
    	{
        	number *= -1;
        	negative = 1;
    	}

    	while (number != 0)
    	{
        	r = number % base;
        	arr[i] = (r > 9) ? (r - 10) + 'A' : r + '0';
        	i++;
        	number /= base;
    	}

    	if (negative)
    	{
        	arr[i] = '-';
        	i++;
    	}

    	strrev(arr, 0, i - 1);

    	arr[i] = '\0';

    	return arr;
}

