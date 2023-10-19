#include "main.h"
/**
 * handle_b - Function converts the unsigned int
 * argument into binary.
 * @lst: List of arguments.
 * @format: fornt specifications.
 * @count: Count value of the number of characters
 * Return: 1 if successful.
 */

int handle_b(va_list lst, int *count, const char *format)
{
	int width, precision = 0;
	unsigned int b = va_arg(lst, unsigned int);

	while (*format != '\0' && (*format < '0' || *format > '9'))
	{
		if (*format == '-')
		{
			width = -1;
		}
		else if (*format == '.')
		{
			precision = atoi(format + 1);
			break;
		}

		format++;
	}

	print_decimal_integer(va_arg(lst, int), width, precision, count);

	return (1);
}

/**
 * unsigned_int_to_binary - Helper function.
 * @n: unsigned integer.
 * @count: no of times.
 */

void unsigned_int_to_binary(unsigned int n, int *count)
{
	if (n == 0)
	{
		_putchar('0');
		(*count)++;
		return;
	}

	unsigned_int_to_binary(n / 2, count);
	_putchar((n % 2) + '0');
	(*count)++;
}
