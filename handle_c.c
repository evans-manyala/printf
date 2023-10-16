#include <stdarg.h>
#include <stddef.h>
#include "main.h"

/**
 * handle_c - This function will handle char specifier
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: Success value 1
 */

int handle_c(va_list lst, int *count)
{
	char c = va_arg(lst, int);
	*count += _putchar(c);
	return (1); /* Return 1 to indicate that one character has been processed */
}

