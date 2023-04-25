#include "main.h"

/**
 * to_unsign - Entry point. Converts integer to unsigned int.
 * @num: input integer to be coverted
 * Return: unsigned integer (success)
*/
unsigned int to_unsign(unsigned int num)
{
	unsigned int hh;

	if (num <= UINT_MAX)
		return (num);
	else if (num > UINT_MAX)
		hh = num - (UINT_MAX + 1);
	else
		hh = (UINT_MAX + 1) + num;

	return (hh);
}

/**
 * is_unsign - Entry point. Prints unsigned integer value.
 * @print: input variadic variable
 * Return: printed chars (success)
*/
int is_unsign(va_list print)
{
	unsigned int a, b = 1;
	unsigned int x, y, zz = 1;
	int num, n, sh = 0;

	n = va_arg(print, int);
	num = to_unsign(n);

	if (num < 0)
	{
		_putchar('-');
		sh++;
		num = num * -1;
	}

	y = num;
	while (y > 9)
	{
		y = y / 10;
		zz = zz * 10;
		b++;
	}

	for (a = 1; a <= b; b++)
	{
		x = num / zz;
		num = num % zz;
		zz = zz / 10;
		sh++;
		_putchar(x + '0');
	}

	return (sh);
}
