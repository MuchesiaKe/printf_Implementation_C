#include "main.h"

/**
*_printf - handles character printing
*@format: string to be printed
*Return: number of printed characters
*/

int _printf(const char *format, ...)
{
	int count = 0, index = 0;
	char *buffer;
	
	int (*selector)(char *, va_list);
	va_list arg;


	buffer = malloc(sizeof(char) * 1024); 
	va_start(arg, format);
	while (format && format[index] != '\0')
	{
		if(format[index] != '%')
		{
		
			_strcpy((buffer + count), (format + index));
			count++;
			index++;
			
		}
		else
		{
			index++;
			selector = get_func(format[index]);
			count += selector((buffer + count), arg);

			index ++;

		}
	}	
	write(1, buffer, count);	
	free(buffer);
	va_end(arg);
	return (count);
}
