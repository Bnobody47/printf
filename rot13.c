#include "main.h"

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
		s = "NULL";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; ar1[j] && !k; j++)
		{
			if (s[i] == ar1[j])
			{
				_putchar(ar2[j]);
				counter++;
				k = 1
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
