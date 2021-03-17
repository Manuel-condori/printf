#include "holberton.h"
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

/**
 *print_str - prints the string. Non printable characters (0 < 32 or >= 127)
 *@params: name of th va_list
 *Return: String Length.
 */

int print_str(va_list *params)
{

	int i = 0;
	int count = 0;

	char *str = va_arg(*params, char *);

	if (str == NULL)
	{
		str = "(null)";
	}
	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
		}
		else
		{
			_putchar(str[i]);
			count++;
		}
		i++;
	}
	return (count);
}
