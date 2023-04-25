0x11. C - printf

# Requirements

# General

- Allowed editors: vi, vim, emacs.
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89.
- All your files should end with a new line.
- A README.md file, at the root of the folder of the project is mandatory.
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl.
- You are not allowed to use global variables.
- No more than 5 functions per file.
- The prototypes of all your functions should be included in your header file called main.h.
- All your header files should be include guarded.

# Authorized functions and macros

. write (man 2 write)
. malloc (man 3 malloc)
. free (man 3 free)
. va_start (man 3 va_start)
. va_end (man 3 va_end)
. va_copy (man 3 va_copy)
. va_arg (man 3 va_arg)

# Code will be compiled this way:
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c


#Synopsis

- int _printf(const char *format, ...); is the protype of the function, and this implies that the function takes one madatory argument that can not be altered, since it's a const, and some optional varying number of arguments. The content of the string format determines what happens to the other argument(s), if any.

- _printf() was written to use a local buffer of 1024 bytes when printing although it can print larger sets of data. Its return value ( after a successful execution) is the total number of characters printed to stdout, or -1 if an output error is encountered.

- _printf() is supposed to print every character that is within the double quotes (in the string) to stdout, except special characters, such as format specifiers that is preceded by '%', which initiates some conversion that will involve some optional argument(s).


# Modifier description

- l : An integer conversion to a long int or unsigned long int argument.

- h : An integer conversion to a short int or unsigned short int argument.


# Conversion specifier description

- d, i : The argument int is converted to a signed decimal notation. If precision is present, it gives the minimum number of digits that must appear; if the converted value requires fewer digits, then it is padded with zeros on the left. Default precision is 1.

- o, u, x, X : The argument is converted to unsigned octal (o), unsigned decimal (u), or unsigned hexamedical (x and X) notation. The letters abcdef are used for x conversion and the letters ABCDEF are used for X conversion. If precision is present, it will give the minimum number of digits that must appear; if the converted value requires fewer digits, then it will be padded with zeros. By default the precision is 1.

- c : The int argument is converted to an unsigned char and the resulting character is written. The representation of characters is based off the ASCII coding.

- s : The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are printed up to (but not including) a null byte ('\0'). If precision is specified, then this will determine how many characters are taken into account for printing.

- p : A void * pointer argument is printed as hexadecimal in lower caps representing an adress in memory.

- % : A ' % ' character is written and no conversion is made. The specification is as follows: %%.

- b : The argument is converted to an unsigned int value and then operated to get its binary representation (base 2).

- S : The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are printed up to (but not including) a null byte ('\0'). Non printable characters (0 < ASCII value < 32 or >= 127) are printed this way: \x, followed by the ASCII code value in hexadecimal (upper case - always 2 characters).

- r : The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are printed in reverse order up to (but not including) a null byte ('\0').

- R : The argument received is expected to be a pointer type char * to an array of characters. Characters from this array are encoded to ROT13 and printed in order up to (but not including a null byte ('\0').
