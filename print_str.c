#include "main.h"

/**
 * print_str - prints a string format
 * @args: variable args
 * Return: always 0
 */

int print_str(va_list args)
{
	const char STRING = va_arg(args, const char *);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	return (0);
}
