#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

/**
 * struct converter - Struct converter
 *
 * @specifier: The conversion specifier
 * @f: The function associated
 */

typedef struct converter
{
        char specifier;
        int (*f)(char *buffer, va_list arg);
} converter_t;

int _printf(const char *format, ...);
int _strlen(char *s);
char *_strcpy(char *dest, const char *src);
int print_str(char *buffer, va_list arg);
int _strcmp(char *s1, const char *s2);
int (*get_func(char s))(char *, va_list);
int print_char (char * buffer, va_list arg);
int print_dec (char * buffer, va_list arg);
int print_int (char * buffer, va_list arg);
char* buffer_handler(char *buffer);
char *_memcpy(char *dest, const char *src, unsigned int n);
void strrev(char *arr, int start, int end);
char *_itoa(int number, char *arr, int base);
int print_bin(char *buffer, va_list arg);


#endif

