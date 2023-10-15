#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct t_printf
{
	char *spec_c;
	int (*func)(va_list);
} t_printf;

int _putchar(int c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_num(va_list);
int print_int(va_list);
int print_str(va_list);
int print_percent(va_list);
int print_binary(va_list);
int print_reversed(va_list);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list);
int print_hex(va_list);
int print_HEX(va_list);
int print_address(va_list;
int select_func(const char *format, t_printf func_arr[], va_list arg_list);

#endif
