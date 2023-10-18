#include "main.h"

/**
 * handle_d - This function will handle %d and %i (all same for printf)
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: Success value 1
 */

int handle_d(va_list lst, int *count)
{
	long int number = va_arg(lst, int);
	int dec = 1;
	long int an;

	if (number < 0)
	{
		*count += _putchar('-');
		number *= -1;
	}

	if (number < 10)
		*count += _putchar(number + '0');

	an = number;

	while (an > 9)
	{
		dec *= 10;
		an /= 10;
	}
	while (dec >= 1)
	{
		*count += _putchar(((number / dec) % 10) + '0');
		dec /= 10;
	}

	return (0);
}
