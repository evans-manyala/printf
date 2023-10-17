#include "main.h"

/**
 * handle_c - print char
 * @lst: argument
 *
 * Return: 1 if successful
 */
int handle_c(va_list lst, int *count)
{
	char c = va_arg(lst, int);

	_putchar(c);
	return (1);
}
