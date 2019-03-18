#include <stdarg.h>
#ifndef HOLBERTON_H
#define HOLBERTON_H

int _putchar(char c);
int _printf(const char *format, ...);

void print_char(va_list *);
/* void print_int(va_list);
void print_string(va_list);
void print_double(va_list);*/

/**
 * struct type - An structure for each format
 * 
 * @format: character for the format
 * @func: function for each format
 * */
typedef struct printer
{
  char format;
  void (*func)(va_list *);
} printer_t;

#define PRINTER_LENGTH 1
#endif
