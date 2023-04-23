#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printPointer - prints an hexgecimal num.
 * @val: arguments.
 * @num: number
 * Return: the counter
 */

int printPointer(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int a;
	int b;
	int i;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (i = 0; s[i] != '\0'; i++)
		{
			putchar(s[i]);
		}
		return (i);
	}

	a = (unsigned long int)p;
	putchar('0');
	putchar('x');
	b = printHex_aux(a);
	return (b + 2);
}
