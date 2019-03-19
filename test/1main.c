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

	len = _printf("Binary: %b\n", 22);
	len2 = printf("Binary: %d\n", 10110);
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("%%\n");
	len2 = printf("%%\n");
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("Char%: % cst test\n", 'H');
	len2 = printf("Char%: % cst test\n", 'H');
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("Si funciona: %i\n", -12345);
	len2 = printf("Si funciona: %i\n", -12345);
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("Si funciona: %s\n", "Holberton");
	len2 = printf("Si funciona: %s\n", "Holberton");
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("NEW: %%s\n");
	len2 = printf("REAL: %%s\n");
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("%");
	len2 = printf("%");
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");
	
	len = _printf("%s\n", NULL);
	len2 = printf("%s\n", NULL);
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("%     \n");
	len2 = printf("%     \n");
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");

	len = _printf("Este es %s cero \n", (char *)0);
	len2 = printf("Este es %s cero \n", (char *)0);
	printf("New: %d; Real: %d\n", len, len2);
	printf("------------------\n");
	return (0);
}
