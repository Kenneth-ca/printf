#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_char(va_list param)
{
	char c = va_arg(param, int);
	printf("%c\n", c);
	_putchar(c);
}
