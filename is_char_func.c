#include "main.h"

/**
 * is_char - Entry point. Gets a char value and prints it.
 * @print: input variadic variable
 * Return: printed chars (success)
*/
int is_char(va_list print)
{
	char chars;
	int num = 0;

	chars = va_arg(print, int);

	if (chars)
	{
		num = _putchar(chars);
		return (num);
	}
	else
		return (1);

	return (0);
}
