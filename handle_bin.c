#include "main.h"
/**
 * handle_bin - This function will handle %b to print binary numbers.
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: Success value 1
 */

int handle_bin(va_list lst, int *count)
{
	int number = va_arg(lst, int);
	int reversed = 0;

	while (number > 0)
	{
		reversed = reversed * 2 + number % 2;
		number /= 2;
	}

	while (reversed > 0)
	{
		_putchar(reversed % 10 + '0');
		reversed /= 10;
		(*count)++;
	}

	return (1);
}
