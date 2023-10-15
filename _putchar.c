#include "main.h"

/**
 * _putchar - Prints char c to the standard output.
 * @c: Char to be printed.
 *
 * Return: Upon success 1 otherwise -ve 1.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
