#include <stdio.h>
#include <stdarg.h>
#include "main.h"


int _printf(const char *format, ...)
{
	/* state 0 = regular, state 1 = escape */
	if (format == NULL)
		return (-1); /* Failure if format is NULL */
	int state = 0; /* Start with regular printing mode */
	int i = 0;
	int count = 0; /* to return number of the arguments passed */

	va_list lst;

	va_start(lst, format);

	while (*format)
	{
		if (state == 0)
		{
			if (*format == '%')
				state = 1;
			else
			{
				_putchar(*format);
				count++;
			}
		}
		else if (state == 1)
		{
			switch(*format)
			{
				case 'c':
				_putchar(va_arg(lst, int));
				count++;
				break;
				case 's':
				handle_s(lst, &count);	
				break;
				case '%':
				_putchar('%');
				count++;
				break;
			}
			state = 0;
		}
		*format++;
	}
	va_end(lst);
	return (count);
}				
