#include "main.h"

/**
 * is_int - gets an integer value & prints it
 * @print: variadic variable
 *
 * Return: count of characters printed
 */

int is_int(va_list print)
{
	unsigned int i, j = 1;
	unsigned int v, v1, v2 = 1;
	int num, count = 0;

	num = va_arg(print, int);

	if (num < 0)
	{
		_putchar('-');
		count++;
		num = num * -1;
	}

	v1 = num;
	while (v1 > 9)
	{
		v1 = v1 / 10;
		v2 = v2 * 10;
		j++;
	}

	for (i = 1; i <= j; i++)
	{
		v = num / v2;
		num = num % v2;
		v2 = v2 / 10;
		count++;
		_putchar(v + '0');
	}
	return (count);
}
