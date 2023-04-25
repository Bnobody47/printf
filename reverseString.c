#include "main.h"

/**
 * printSrev - a function that prints a string in reverse.
 *
 * @args: list of arguments passed to printf.
 * Return: returns integer value.
 */

int printSrev(va_list args)
{

	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
	{
		s = "(null)";
	}
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		putChar(s[i]);
	return (j);
}
