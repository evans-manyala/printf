#include <stdarg.h>
#include "main.h"

/**
 * handle_d - This function will handle %d and %i (all same for printf)
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: Success value 1
 */

int handle_d(va_list lst, int *count)
{
	int number = va_arg(lst, int);

	if (number < 0)
	{
		_putchar('-');
		number = -number;
		(*count)++;
	}

	if (number == 0)
	{
		_putchar('0');
		(*count)++;
	}
	else
	{
		int reversed = 0;

		while (number > 0)
		{
			reversed = reversed * 10 + number % 10;
			number /= 10;
		}

		while (reversed > 0)
		{
			_putchar(reversed % 10 + '0');
			reversed /= 10;
			(*count)++;
		}
	}
	return (1);
}
