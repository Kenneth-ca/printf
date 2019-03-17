#include <stdarg.h>
#ifndef HOLBERTON_H
#define HOLBERTON_H

/**
 * struct type - An structure for each format
 * 
 * @format: character for the format
 * @func: function for each format
 * */
typedef struct type
{
  char fm;
  void (*func)(va_list);
} fm_t;
fm_t printer[] = {
{'c', f_char},
{'i', f_int},
{'s', f_string},
{'d', f_double},
};

int _putchar(char c);
int _printf(const char *format, ...);
void f_char(va_list);
void f_int(va_list);
void f_string(va_list);
void f_double(va_list);

#define PRINTER_LENGHT = 0
#endif
