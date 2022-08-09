#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: The string
 * Return: number of characters printed
 */

int _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	return (i);
}
/**
 * print_string - printing a character, followed by a new line
 * @args print_string arguments with zero and directives
 * Return: number of characters printed
*/

int print_string(va_list args)
{
	return (_puts(va_arg(args, char *)));
}
