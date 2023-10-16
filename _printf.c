#include <stdio.h>
#include <stdarg.h>
#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
FormatSpecifier specifiers[] = {{ 's', handle_s },
{'c', handle_c}, {'%', handle_perc}, {'d', handle_d}, {'i', handle_d}};

	int count = 0;
	int state = 0;
	size_t i;
	va_list lst;

	if (format == NULL || format[1] == '\0')
		return (-1);
	va_start(lst, format);
	while (*format)
	{
		if (state == 0)  /* state 0 = regular, state 1 = escape */
		{
			if (*format == '%')
				state = 1;
			else
				count += _putchar(*format);
		}
		else if (state == 1)
		{
			char specifier = *format;

			for (i = 0; i < sizeof(specifiers) / sizeof(specifiers[0]); i++)
			{
				if (specifiers[i].specifier == specifier)
				{
					specifiers[i].handler(lst, &count);
					break;
				}
			}
			state = 0;
		}
		format++;
	}
	va_end(lst);
	return (count);
}
