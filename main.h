#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>
#include <string.h>
#include <stddef.h>

/**
 * struct will_handle - structure for handler
 * @specifier: first member
 * @handler: second member
 */

typedef struct FormatSpecifier
{
	char specifier;
	void (*handler)(va_list, int *);
} FormatSpecifier;

int _printf(const char *format, ...);
int _putchar(char c);
int handle_s(va_list lst, int *count);
int handle_c(va_list lst, int *count);
int handle_perc(va_list lst, int *count);
int handle_d(va_list lst, int *count);

#endif

