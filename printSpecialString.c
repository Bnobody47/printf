#include "main.h"

/**
 * printExclusive_string - print exclusives strings.
 * @val: argument.
 * Return: string length
 */

int printExclusive_string(va_list val)
{
	char *s;
	int i, len = 0;
	int delta;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "null";
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			putChar('\\');
			putChar('x');
			len = len + 2;
			delta = s[i];
			if (delta < 16)
			{
				putChar('0');
				len++;
			}
			len = len + printHEX_aux(delta);
		}
		else
		{
			putChar(s[i]);
			len++;
		}
	}
	return (len);
}
