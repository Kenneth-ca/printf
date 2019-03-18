#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * print_int - writes the integer i
 * @param: The name for va_list
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int print_int(va_list *param)
{
	int i = 0;

	i = va_arg(*param, int);
	_putchar(i);
	return (i);
}
