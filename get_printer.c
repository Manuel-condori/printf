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
	int i, cant_formats = 1;
	printer_t printers[] = {
		{'c', print_char},
	};

	for (i = 0; i < cant_formats; i++)
		if (printers[i].format == format)/*compara con el formato selecionado */
			return (printers[i]);
	return (printers[i - 1]);
}
