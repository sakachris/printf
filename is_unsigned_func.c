#include "main.h"

/**
 * to_unsign - converts integer to unsigned integer
 * @num: integer to be converted
 *
 * Return: unsigned integer
 */

unsigned int to_unsign(unsigned int num)
{
	unsigned int uns;

	if (num <= UINT_MAX)
	{
		return (num);
	}
	else if (num > UINT_MAX)
	{
		uns = num - (UINT_MAX + 1);
	}
	else
	{
		uns = (UINT_MAX + 1) + num;
	}

	return (uns);
}

/**
 * is_unsign - gets unsigned integer value & prints it
 * @print: variadic variable
 *
 * Return: count of characters printed
 */

int is_unsign(va_list print)
{
	unsigned int i, j = 1;
	unsigned int v, v1, v2 = 1;
	int num, n, count = 0;

	n = va_arg(print, int);
	num = to_unsign(n);

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
