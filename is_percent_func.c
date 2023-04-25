#include "main.h"

/**
 * is_percent - Entry point. Prints '%'.
 * @print: input variadic variable
 * Return: printed '%' (success)
*/
int is_percent(va_list print)
{
	(void)print;

	_putchar('%');

	return (1);
}
