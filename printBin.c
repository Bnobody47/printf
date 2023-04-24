#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * printBin - prints binary numbers.
 * @val: argumentes
 * Return: count.
 */

int printBin(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & num);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			putChar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		putChar('0');
	}
	return (count);
}
