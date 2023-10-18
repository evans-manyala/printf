#include "main.h"
/**
 * handle_b - Function converts the unsigned int
 * argument into binary.
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: 1 if successful.
 */

int handle_b(va_list lst, int *count)
{
	unsigned int b = va_arg(lst, unsigned int);

	unsigned_int_to_binary(b, count);

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
