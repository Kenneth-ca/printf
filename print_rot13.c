#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * print_rot13 - converts to rot13
 * @params: The name for va_list
 *
 * Return: String Length.
 */
int print_rot13(va_list *params)
{
	int length = 0, k;
	char from[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char to[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *str = va_arg(*params, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	for (length = 0; str[length] != '\0' ; length++)
	{
		k = 0;
		while (str[k])
		{
			if (str[length] == from[k])
			{
				str[length] = to[k];
				break;
			}
			k++;
		}
		_putchar(str[length]);
		length++;
	}

	return (length);
}
