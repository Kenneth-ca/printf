#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
/**
 * check_special - prints according to format
 * @format: The given format
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */

int check_special(char check)
{
	if (check == '%')
		_putchar('5');
	return (0);
}

/**
 * _printf - prints according to format
 * @format: The given format
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _printf(const char *format, ...)
{
	int length = 0, formats = 9;
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'u', print_unsigned_int},
		{'d', print_double},
		{'o', print_octal},
		{'x', print_mini_hexa},
		{'X', print_hexa},
		{'b', print_binary}
	};
	va_list params;
	int i = 0, putchar_flag = 1, j;

	va_start(params, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%' && putchar_flag)
			length += _putchar(format[i]);
		else
			putchar_flag = 0;
		if (!putchar_flag && format[i] != '%')
			for (j = 0; j < formats; j++)
			{
				if (printers[j].format == format[i])
				{
					length += printers[j].func(&params);
					
				}
				else
				{
					check_special(format[i]);
				}
				putchar_flag = 1;
			}
		i++;
	}
	return (length);
}
