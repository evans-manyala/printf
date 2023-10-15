#include "main.h"
/**
 * print_string - prints string.
 * @val: argument.
 * Return: the length of the string.
 */

int print_string(va_list val)
{
	char *s;
	int x, len;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (x = 0; x < len; x++)
			_putchar(s[x]);
		return (len);
	}
}
