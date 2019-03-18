#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * length_d - find the length of an integer
 * @i: The number to get the length
 *
 * Return: On success length.
 */
int length_d(int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * repeat_d - prints recursively
 * @i: The number to be printed
 *
 * Return: nothing.
 */
void repeat_d(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		repeat_d(i / 10);
	}
	_putchar(i % 10 + '0');
}
/**
 * print_double - writes the integer d
 * @param: The name for va_list
 *
 * Return: lenght of the integer
 */
int print_double(va_list *param)
{
	int i = 0, len = 0, negative = 0;

	i = va_arg(*param, int);
	if (i < 0)
		negative = 1;
	len += length_d (i, len);
	repeat_d(i);
	len = len + negative;
	return (len);
}
