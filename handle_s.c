#include "main.h"

/**
 * handle_s - print string
 * @lst: argument.
 * Return: i - 1 the number of characters in the string.
 */

int handle_s(va_list lst)
{
	int i = 0;
	char *s = va_arg(lst, char *);

	if (!s)
	{
		s = "(null)";
	}

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	return (i);
}
