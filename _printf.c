#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * _printf - prints according to format
 * @format: The given format
 *
 * Return: On success 1.
 * On error, -1 is returned.
 */
int _printf(const char *format, ...)
{
	va_list params;
	int i = 0, putchar_flag = 1, length = 0;

	if (((format[0] == '%') && (!format[1])) || (format == NULL))
		return (-1);
	va_start(params, format);
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			if (putchar_flag)
				length += _putchar(format[i]);
			else
			{
				length += select_printer(format[i], &params);
				putchar_flag = 1;
			}
		else
			if (putchar_flag)
				putchar_flag = 0;
			else
			{
				/* ToDO: Add condition for blanks */
				length += _putchar(format[i]) + 1;
				putchar_flag = 1;
			}
		i++;
	}
	return (length);
}
