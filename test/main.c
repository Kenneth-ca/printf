#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
	unsigned int ui;
	void *addr;

	len = _printf("Integer:[%i]\n", -123456);
	len2 = printf("Integer:[%i]\n", -123456);
	printf("%d\n", len);
	printf("%d\n", len2);
	_printf("Hola Mundo\n", 'S');
	_printf("Hola %c Mundo\n", 'S');
	len = _printf("Character:[%c]\n", 'H');
	printf("%d\n", len);
	len = printf("Character:[%c]\n", 'H');
	printf("%d\n", len);
	/*_printf("%c\n", 'S');*/
	len = _printf("Hola %d Mundo%i\n", 356, -356);
	printf("%d\n", len);
	len = printf("Hola Mundo\n");
	printf("%d\n", len);
	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");	
	ui = (unsigned int)INT_MAX + 1024;
	addr = (void *)0x7ffe637541f0;
	_printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);
	printf("Unsigned:[%u]\n", ui);
	_printf("_Unsigned:[%u]\n", ui);
	len = printf("Unsigned:[%u]\n", ui);
	len2 = _printf("_Unsigned:[%u]\n", ui);
	printf("Length:[%d, %i]\n", len, len);
	printf("Length:[%d, %i]\n", len2, len2);	
/*	_printf("Negative:[%d]\n", -762534);
	printf("Negative:[%d]\n", -762534);
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("String:[%s]\n", "I am a string !");
	printf("String:[%s]\n", "I am a string !");
	_printf("Address:[%p]\n", addr);
	printf("Address:[%p]\n", addr);
	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);
	_printf("Unknown:[%r]\n");
	printf("Unknown:[%r]\n");
*/
	return (0);
}
