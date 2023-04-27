#include "main.h"

/**
 * is_string - Entry point. Prints a string value.
 * @print: input variadic variables
 * Return: printed string || -1 if error (success)
*/
int is_string(va_list print)
{
	int num = 0;
	char *str;

	str = va_arg(print, char *);

	if (str == NULL)
	{
		num = _puts("(null)");
		return (num);
	}
	if (!str)
		return (-1);
	else
	{
		num = _puts(str);
		return (num);
	}

	return (0);
}
