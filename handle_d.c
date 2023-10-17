#include "main.h"

/**
 * handle_d - This function will handle %d and %i (all same for printf)
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: Success value 1
 */

int handle_d(va_list lst, int *count)
{
	int i = va_arg(lst, int);

	if (i < 0)
	{
		i = -i;
		_putchar('-');
	}

	char *result = converter(i, 10);

	while (*result)
	{
		_putchar(*result);
		result++;
		(*count)++;
	}
	return (1);
}
