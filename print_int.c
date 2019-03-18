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
	int i = 0, cont = 0;

	i = va_arg(*param, int);
	while (i / 10)
	{
		if (i < 0)
		{
			putchar('-');
			i = -i;
			_putchar(i + '0');
		}
		_putchar(i + '0');
		i = i / 10;
		cont++;
	}
	i = i % 10;
	_putchar(i + '0');
	cont++;
	return (cont);
}
