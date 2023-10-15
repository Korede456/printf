#include "main.c"

/**
 * select_func - it selects the function to
 * be used in accordance to the format.
 *
 * @format: formats
 * @func_arr: array of func pointers
 * @arg_list: variable list
 *
 * Return: always 0
 */

int select_func(const char *format, t_printf func_arr[], va_list arg_list);

int select_func(const char *format, t_printf func_arr[], va_list arg_list)
{
	int i, j, retrn, print_c = 0;

	for (i = 0; format[i] != '\0'; i++) /* loops through the format string */
	{
		if (format[i] == '%')
		{
			for (j = 0; func_arr[j].spec_c != NULL; j++)
			{
				if (format[i + 1] == func_arr[j].spec_c[0])
				{
					retrn = func_arr[j].func(arg_list);
					if (retrn == -1)
					{
						return (-1);
					}
					printed_c = printed_c + retrn;
					break;
				}
			}
			if (func_arr[j].spe_c == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1] != '\0')
				{
					_write_char(format[i]);
					_write_char(format[i + 1]);
					printed_c = printed_c + 2;
				}
				else
					return (-1);
			}
			i++;
		}
		else
		{
			_write_char(format[i]);
			printed_c++;
		}
	}
	return (printed_c);
}
