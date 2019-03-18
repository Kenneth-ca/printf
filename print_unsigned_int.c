#include <stdarg.h>
#include "holberton.h"

/**
 * repeat_i - prints recursively
 * @i: The number to be printed
 * @length: The amount of digits to be printed.
 * Return: length.
 */
int print_number(unsigned int value, int length)
{
	if (value / 10)
		length = print_number(value / 10, length + 1);
	_putchar(value % 10 + '0');
	return (length);
}

/**
 * print_unsigned_int - writes the unsigned integer i
 * @param: The name for va_list
 *
 * Return: number length.
 * On error, -1 is returned.
 */
int print_unsigned_int(va_list *params)
{
	int length = 0, negative = 0;
	unsigned int value = va_arg(*params, unsigned int);

	if (value < 0)
	{
		negative = 1;
		value = -value;
		// Handle value at bit level to have the same behavior.
	}
	
	length = print_number(value, length) + negative;
	return (length);	
}
