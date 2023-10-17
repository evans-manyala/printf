#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct will_handle - print data
 * @c: character.
 * @ptr: function pointer.
 */
typedef struct will_handle
{
	char *c;
	int (*ptr)(va_list lst);
} FormatSpecifier;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_c(va_list lst);
int handle_s(va_list lst);

#endif /* MAIN_H */

