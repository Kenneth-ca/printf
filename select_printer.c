#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * select_printer - Selects a printer for the format and print the param.
 * @s: the format to be printed
 * @params: the params list to be printed
 * Return: the length of elements printed.
 */
printer_t select_printer(char format)
{
	int i, formats = 10;
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'i', print_int},
		{'u', print_unsigned_int},
		{'d', print_double},
		{'o', print_octal},
		{'x', print_mini_hexa},
		{'X', print_hexa},
		{'b', print_binary},
		{'*', print_special}
	};

	for (i = 0; i < formats; i++)
		if (printers[i].format == format)
			return (printers[i]);
	return (printers[i - 1]);
	/* return (1); */
}
