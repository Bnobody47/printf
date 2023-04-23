#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - is is a function which print the correct function selected.
 * @format: identifier to look for.
 * Return: The length of string.
 */

int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printString}, {"%c", printChar},
		{"%%", print_37},
		{"%i", printInt}, {"%d", printDec}, {"%r", printSrev},
		{"%R", printRot13}, {"%b", printBin}, {"%u", printUnsigned},
		{"%o", printOct}, {"%x", printHex}, {"%X", printHEX},
		{"%S", printExclusive_string}, {"%p", printPointer}
	};

	va_list args;
	int i = 0, j, len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i = i + 2;
				goto Here;
			}
			j--;
		}
		putchar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
