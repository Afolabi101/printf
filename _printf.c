#include "main.h"

/**
 * _printf - prints anything
 * @format: the format string
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0;
	int printed = 0;

	while (format[i])
	{
		_putchar(format[i]);
		printed++;
		i++;
	}
	return (printed);
}
