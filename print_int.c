#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * repeat - prints recursively
 * @i: The number to be printed
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
void repeat(int i, int length)
{
	if (i < 0)
	{
		length += _putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		repeat(i / 10, length);
	}
	length += _putchar(i % 10 + '0');
}
/**
 * print_int - writes the integer i
 * @param: The name for va_list
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int print_int(va_list *param)
{
	int i = 0, length = 0;

	i = va_arg(*param, int);
	repeat(i, length);
	return (length);
}
