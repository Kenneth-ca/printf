#include <stdarg.h>
#include "holberton.h"
/**
 * length_i - prints recursively
 * @i: The number to get the length
 *
 * Return: On success length.
 */
int length_i(int i, int len)
{
	while (i / 10)
	{
		i = i / 10;
		len++;
	}
	return (len);
}

/**
 * repeat_i - prints recursively
 * @i: The number to be printed
 *
 * Return: nothing.
 */
void repeat_i(int i)
{
	if (i < 0)
	{
		_putchar('-');
		i = -i;
	}
	if (i / 10)
	{
		repeat_i(i / 10);
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
	len += length_i (i, len);
	repeat_i(i);
	len = len + negative + 1;
	return (len);
}
