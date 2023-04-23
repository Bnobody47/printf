#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printExclusive_string - print exclusives strings.
 * @val: argument.
 * Return: string length
 */

int printExclusive_string(va_list val)
{
	char *s;
	int i, len = 0;
	int cast;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			putchar('\\');
			putchar('x');
			len = len + 2;
			cast = s[i];
			if (cast < 16)
			{
				putchar('0');
				len++;
			}
			len = len + printHEX_aux(cast);
		}
		else
		{
			putchar(s[i]);
			len++;
		}
	}
	return (len);
}
