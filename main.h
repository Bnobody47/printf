#define MAIN_H
#ifndef MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
	char *id;
	int (*f)();
} convert_match;

int printPointer(va_list val);
int printHex_aux(unsigned long int num);
int printHEX_aux(unsigned int num);
int printExclusive_string(va_list val);
int printHEX(va_list val);
int printHex(va_list val);
int printOct(va_list val);
int printUnsigned(va_list args);
int printBin(va_list val);
int printSrev(va_list args);
int printRot13(va_list args);
int printInt(va_list args);
int printDec(va_list args);
int _strlen(char *s);
int *_strcpy(char *dest, char *src);
int _strlenc(const char *s);
int revString(char *s);
int print_37(void);
int printChar(va_list val);
int printString(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif
