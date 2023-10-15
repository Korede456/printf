#include "main.h"

/**
 * _printf - it prints multiple format
 * @format: format string
 * @...: variable arg
 *
 * Return: always 0
 */

int _printf(const char *format, ...);

int _printf(const char *format, ...)
{
	int printed_chars;

	s_printf func_arr[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"p", print_address},
		{NULL, NULL}
	};

	va_list arg_list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(arg_list, format);
	printed_chars = select_func(format, func_arr, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
