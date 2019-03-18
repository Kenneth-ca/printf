#include <stdarg.h>
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
	int length = 0;
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'d', print_double}
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
			for (j = 0; j < 4; j++)
				if (printers[j].format == format[i])
				{
					length += printers[j].func(&params);
					putchar_flag = 1;
				}
		i++;
	}
	return (length);
}
