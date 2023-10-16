#include "main.h"

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *format, ...)
{
	FormatSpecifier specifiers[] = {
		{'s', handle_s},
		{'c', handle_c},
		{'%', handle_perc}
	};

	va_list args;
	int x, len = 0, y;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[x] != '\0')
	{
		y = 2;
		while (y >= 0)
		{
			if (specifiers[y].specifier == format[x])
			{
				len += specifiers[y].handler(args, &len);
				x += 1;
				goto Here;
			}
			y--;
		}
		_putchar(format[x]);
		len++;
		x++;
	}

Here:
	va_end(args);
	return (len);
}

