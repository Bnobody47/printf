#include "main.h"

/**
 * printChar - a function that prints a char at a time.
 *
 * @val: list of characters to be printed.
 * Return: returns 1 upone success.
 */

int printChar(va_list val)
{
	char s;

	s = va_arg(val, int);
	putChar(s);
	return (1);
}
