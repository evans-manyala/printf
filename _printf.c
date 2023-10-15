#include <stdio.h>
#include <stdarg.h>
#include "main.h"




int _printf(const char *format, ...)
{
FormatSpecifier specifiers[] = {{ 's', handle_s },
{'c', handle_c}, {'%', handle_perc}};

	if (format == NULL)
		return (-1); /* Failure if format is NULL */
	int state = 0, count = 0 ; /* Start with regular printing mode */
	va_list lst;

	va_start(lst, format);
	while (*format)
	{
		if (state == 0)  /* state 0 = regular, state 1 = escape */
		{
			if (*format == '%')
			{
				state = 1;
			}
			else
			{
				count += _putchar(*format);
			}
		}
		else if (state == 1)
		{
			char specifier = *format;

			for (size_t i = 0; i < sizeof(specifiers) / sizeof(specifiers[0]); i++)
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
