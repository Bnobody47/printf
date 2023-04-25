#include "main.h"

/**
 * printBin - prints binary numbers.
 * @val: list of argumentes to be converted into binary number.
 * Return: the count.
 */

int printBin(va_list val)
{
	int flag = 0;
	int count = 0;
	int i, a, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	a = 1;

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
