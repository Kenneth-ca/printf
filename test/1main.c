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

	len = _printf("NEW: %%s\n");
	len2 = printf("REAL: %%s\n");
	printf("New: %d; Real: %d\n", len, len2);
	return (0);
}
