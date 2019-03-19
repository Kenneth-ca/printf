#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * select_printer - Selects a printer for the format and print the param.
 * @s: the format to be printed
 * @params: the params list to be printed
 * Return: the length of elements printed.
 */
int select_printer(char s, va_list *params)
{
	int i, formats = 9;
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

	for (i = 0; i < formats; i++)
	{
		if (printers[i].format == s)
			return (printers[i].func(params));
		/* else
		{
			return (_putchar('%')); 
		}
		*/
	}
	return (0);
}
