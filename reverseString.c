#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * printSrev - a function that prints string in reverse.
 *
 * @s: char pointer to a string.
 * Return: returns integer value.
 */

int printSrev(char *s)
{
	char *str;
	int i, j;

	str = va_arg(args, char*);
	j = 0;

	if (str == NULL)
		str = "(null)";
	while (str[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		putChar(s[i]);
	return (j);
}
