#include "main.h"

/**
 * _strlen - a function to determine the length of  string.
 *
 * @s: char pointer to a string to determing length for.
 * Return: length of the string.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);

}

/**
 * _strlenc - _strlen function for constant char pointer.
 *
 * @s: char pointer to a constant string to determine length for.
 * Return: length of s.
 */

int _strlenc(const char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;
	return (i);
}
