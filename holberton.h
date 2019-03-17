#include <stdarg.h>
#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
int _printf(const char *format, ...);

int print_char(va_list);
/* int print_int(va_list);
int print_string(va_list);
int print_double(va_list);*/

/**
 * struct type - An structure for each format
 * 
 * @format: character for the format
 * @func: function for each format
 * */
typedef struct printer
{
  char format;
  int (*func)(va_list);
} printer_t;

#define PRINTER_LENGTH 1
#endif
