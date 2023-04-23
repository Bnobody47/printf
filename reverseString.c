#include "main.h"

/**
 * printSrev - a function that prints string in reverse.
 *
 * @s: char pointer to a string.
 * Return: returns integer value.
 */

int printSrev(char *s)
{
	char *s;
	int i, j;

	s = va_arg(args, char*);
	j = 0;

	if (s == NULL)
		s = "NULL";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}
