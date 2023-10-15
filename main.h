#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

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
