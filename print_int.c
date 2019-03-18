#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * length - prints recursively
 * @i: The number to get the length
 *
 * Return: On success length.
 */
int length(int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * repeat - prints recursively
 * @i: The number to be printed
 *
 * Return: nothing.
 */
void repeat(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		repeat(i / 10);
	}
	_putchar(i % 10 + '0');
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
	int i = 0, len = 0, negative = 0;

	i = va_arg(*param, int);
	if (i < 0)
		negative = 1;
	len += length (i, len);
	repeat(i);
	len = len + negative;
	return (len);
}
