#include "main.h"

/**
 * handle_c - print char
 * @lst: argument
 *
 * Return: 1 if successful
 */
int print_char(va_list lst)
{
        char c = va_arg(lst, int);
        _putchar(c);

        return (1);
}
