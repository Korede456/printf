#include "main.h"

/**
 * print_percent - it prints the percent sign
 * @arg: variable arg
 *
 * Return: num ber of chars printed
 */

int print_percent(va_list args)
{
	char percent = va_arg(args, int);

	while (percent == '%')
	{
		_putchar(percent);
	}
	return (1);
}
