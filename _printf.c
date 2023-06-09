#include "main.h"

/**
 * _printf - a function that prints ouput using the correct format.
 *
 * @format: identifier to look for.
 * Return: length of string.
 */

int _printf(const char * const format, ...)
{
	convert_match m[] = {
		{"%s", printString}, {"%c", printChar},
		{"%%", printPercent},
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

Re:
	while (format[i] != '\0')
	{
		j = 13;
		while (j >= 0)
		{
			if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
			{
				len += m[j].f(args);
				i += 2;
				goto Re;
			}
			j--;
		}
		putChar(format[i]);
		len++;
		i++;
	}
	va_end(args);
	return (len);
}
