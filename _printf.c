#include <stdarg.h>
#include "holberton.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int i = 0, j;
	char *putchar_flag = '1';
	printer_t printer[];

	while (format[i] != '\0')
	{
		if (format[i] != '%' && putchar_flag)
			_putchar(format[i]);
		else
			putchar_flag = NULL;
		if (putchar_flag && format[i] != '%')
			for (j = 0; j < PRINTER_LENGTH; j++)
				if (printer[j].format == format[i])
					printer[j].func(format[i],va_list);
	}
	return (0);
}
