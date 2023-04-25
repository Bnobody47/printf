#include "main.h"

/**
 * printPointer - prints an hedxecimal num.
 * @val: arguments.
 * Return: the counter
 */

int printPointer(va_list val)
{
	void *p;
	char *s = "(null)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putChar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	putChar('0');
	putChar('x');
	b = printHex_aux(a);
	return (b + 2);
}
