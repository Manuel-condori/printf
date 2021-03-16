#include <stdio.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * select_printer - Select a printer for the format.
 * @format: the format to be printed
 * Return: the printer selected for elements to print.
 */
printer_t get_printer(char format)
{
	int i;
	int cant_formats = 8;
	printer_t printers[] = {
		{'c', print_char},
		{'s', print_string},
		{'S', print_string},
	};

	for (i = 0; i < cant_formats; i++)
		if (printers[i].format == format)
			return (printers[i]);
	return (printers[i - 1]);
}
