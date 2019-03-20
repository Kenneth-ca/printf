#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * select_printer - Selects a printer for the format and print the param.
 * @format: the format to be printed
 * Return: the printer selected for elements to print.
 */
printer_t select_printer(char format)
{
	int i, formats = 11;
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
		{'R', print_rot13}
	};

	for (i = 0; i < formats; i++)
		if (printers[i].format == format)
			return (printers[i]);
	return (printers[i - 1]);
}
