#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>

/**
 * struct will_handle - structure for handler
 * @specifier: first member
 * @handler: second member
 */

typedef struct will_handle
{
	char specifier;
	int (*handler)(va_list, int *);
} FormatSpecifier;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_s(va_list lst, int *count);
int handle_c(va_list lst, int *count);
int handle_perc(va_list lst, int *count);
int handle_d(va_list lst, int *count);
int handle_b(va_list lst, int *count, const char *format);
void print_decimal_integer(int n, int width, int precision, int *count);

#endif

