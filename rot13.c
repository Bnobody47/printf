#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * printRot13 - a function that prints the rot13'ed string.
 *
 * @args: list of printf argument.
 * Return: returns counter.
 */

int printRot13(va_list args)
{
	int i, j, k, counter;
	char *s;


	char ar1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char ar2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	k = 0;
	counter = 0;
	s = va_arg(args, char*);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; ar1[j] && !k; j++)
		{
			if (s[i] == ar1[j])
			{
				putChar(ar2[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			putChar(s[i]);
			counter++;
		}
	}
	return (counter);
}
