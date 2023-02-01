#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n"); 
	_printf("String:[%s]%s\n", "I am a string !", "another string");
	printf("String:[%s]\n", "I am a string !");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned octal:[%o]\n", ui);
	_printf("%o\n", 1024);
	printf("%o\n", 1024);
	_printf("%o\n", -1024);
	printf("%o\n", -1024);
	_printf("%u\n", -1024);
	printf("%u\n", -1024);
	_printf("%x\n", -1024);
	printf("%x\n", -1024);
	_printf("%X\n", -1024);
	printf("%X\n", -1024);
    	printf("Unsigned octal:[%o]\n", ui);
	printf("%c%c%c \n", 'H', 'e', 'y');
	return (len);
}
