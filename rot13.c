#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * printRot13 - prints the rot13'ed string.
 *
 * @args: printf argument.
 * Return: returns counter.
 */

int printRot13(va_list args)
{
	int i, j, k, counter;
	char *s;

	k = 0;
	counter = 0;
	s = va_arg(args, char*);
	char ar1[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char ar2[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

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
