#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>
#include <unistd.h>

/**
 * struct - match the conversion specifiers of printf
 */

typedef struct {
	char specifier;
	int (*handler)(va_list, int *);
} FormatSpecifier;

void specifiers_list(void);
int _printf(const char *format, ...);
int _putchar(char c);
int handle_s(va_list lst, int *count);
int handle_c(va_list lst, int *count);
int handle_perc(va_list lst, int *count);

#endif

