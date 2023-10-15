#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char * const format, ...)
{
	convert_string m[] = {
		{"%s", print_string}, {"%c", print_char},
	};

	va_list args;
	int x, len = 0, y;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[x] != '\0')
	{
		y = 13;
		while (y >= 0)
		{
			if (m[y].id[0] == format[x] && m[y].id[1] == format[x + 1])
			{
				len += m[y].f(args);
				x += 2;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		len++;
		x++;
	}
	va_end(args);
	return (len);
}
