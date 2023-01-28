#include "main.h"

/**
 * get_func - selects the correct function to perform the conversion
 *
 * @s: the conversion specifier
 * Return: pointer to the appropriate function
 */

int (*get_func(char s))(char *, va_list)
{
	converter_t convs[] = {
                {'c', print_char},
                {'s', print_str},
                {'d', print_int},
                {'i', print_int},
                {0, NULL}
        };
	int i = 0;

	while (i < 4)
	{
		if (convs[i].specifier == s)
			return (convs[i].f);
		i++;
	}
	return (convs[i].f);
}

