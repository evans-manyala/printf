#include "main.h"

/**
 * handle_perc - This function will handle percent after encountered one time
 * @lst: List of arguments
 * @count: Count value of the number of characters
 * Return: Success value 1
 */

int handle_perc(va_list lst, int *count)
{
	(void)lst; /* Unused parameter (avoid compiler warnings) */

	_putchar('%');
	(*count)++;

	/*count += _putchar('%');  Print '%' and increment the character count*/
	return (1); /*Return 1 to indicate that one character has been processed*/
}
