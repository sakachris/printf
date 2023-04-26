#include "main.h"

/**
 * is_char - gets a character value & prints it
 * @print: variadic variable
 *
 * Return: count of characters printed
 */

int is_char(va_list print)
{
	char c;
	int count = 0;

	c = va_arg(print, int);

	if (c)
	{
		count = _putchar(c);
		return (count);
	}
	else
	{
		return (1);
	}

	return (0);
}
