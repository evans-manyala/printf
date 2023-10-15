#include <stdarg.h>
#include <stddef.h>
#include "main.h"
int handle_c(va_list lst, int *count) {
    // Handle 'c' format specifier
    char c = va_arg(lst, int);
    *count += _putchar(c);
    return 1; // Return 1 to indicate that one character has been processed
}

