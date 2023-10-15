#include <stdarg.h>
#include <stddef.h>
#include "main.h"
int handle_s(va_list lst, int *count)
{
	char *str = va_arg(lst, char *);
	if (str == NULL)
		return (-1);

	while (*str)
	{
		_putchar(*str++);
		(*count)++; // Increment the character count
    	}
}
