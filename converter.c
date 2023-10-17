#include "main.h"

/**
 * converter - converts an unsigned integer (num) into a
 * string representation in a specified base
 * @num: number to convert
 * @base: convert to specific base
 * Return: pointer to the converted
 */

char *converter(unsigned int num, int base)
{
	static const char Representation[] = "0123456789ABCDEF";
	static char buffer[50];
	char *ptr;

	ptr = &buffer[49];
	*ptr = '\0';
	do {
		*--ptr = Representation[num % base];
		num /= base;
	} while (num != 0);
	return (ptr);
}
