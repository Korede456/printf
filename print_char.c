#include "main.h"

/**
 * print_char - prints a char type
 * @args: variable arg
 * Return: number of chars printed
 */

int print_char(va_list args)
{
	_putchar(va_arg(args, int));
	return (1);
}
