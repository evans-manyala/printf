#include "main.h"
/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */

int _printf(const char *format, ...)
{
FormatSpecifier specifiers[] = {{"s", handle_s}, {"c", handle_c}};

	int count = 0;
	int i = 0;
	va_list lst;

	if (!format)
		return (-1);
	va_start(lst, format);
	while (format && *(format + i))
	{
		if (format[i] == '%' && (!format[i + 1] || format[i + 1] == ' '))
			return (-1);
		else if (format[i] == '%' && *(format + i + 1) == 'c')
		{
			count += specifiers[0].ptr(lst);
			i++;
		}
		else if (format[i] == '%' && *(format + i + 1) == 's')
		{
			count += specifiers[1].ptr(lst);
			i++;
		}
		else if (format[i] == '%' && *(format + i + 1) == '%')
		{
			count += _putchar('%');
			i++;
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(lst);
	return (count);
}
