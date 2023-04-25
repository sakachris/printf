#include "main.h"

/**
 * is_percent - gets a '%' & prints it
 * @print: variadic variable
 *
 * Return: count of % printed
 */

int is_percent(va_list print)
{
	(void)print;

	_putchar('%');

	return (1);
}
