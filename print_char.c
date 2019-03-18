#include <stdarg.h>
#include "holberton.h"
/**
 * print_char - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_char(va_list *params)
{
	char c = va_arg(*params, int);
	_putchar(c);
	return (1);
}
