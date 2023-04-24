#include "main.h"

/**
 * is_string - gets a string value & prints it
 * @print: variadic variable
 *
 * Return: count of characters printed or -1 if error
 */

int is_string(va_list print)
{
	int count = 0;
	char *str;

	str = va_arg(print, char *);

	if (!str)
	{
		return (-1);
	}

	else
	{
		count = _puts(str);
		return (count);
	}

	return (0);
}
