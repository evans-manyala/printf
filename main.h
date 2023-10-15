#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers of printf
 * @id: char pointer of the specifier.
 * @f: pointer to function for the conversion specifier.
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_string;

int printf_string(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
