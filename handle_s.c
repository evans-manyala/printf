#include "main.h"
/**
 * handle_s - This function will handle string specifier
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: Success value 1
 */

int handle_s(va_list lst, int *count)
{
	char *str = va_arg(lst, char *);

	if (str == NULL)
		str = "(null)";

	while (*str)
	{
		_putchar(*str);
		(*count)++; /*Increment the character count*/
		str++;
	}
	return (1);
}
