#include "main.h"

/**
 * is_decimal - Entry point. Prints decimal value.
 * @print: input variadic variable
 * Return: printed chars (success)
*/
int is_decimal(va_list print)
{
	unsigned int a, b = 1;
	unsigned int x, y, z = 1;
	int num, h = 0;

	num = va_arg(print, int);

	if (num < 0)
	{
		_putchar('-');
		h++;
		num = num * -1;
	}
	y = num;
	while (y > 9)
	{
		y = y / 10;
		b++;
		z = z * 10;
	}

	for (a = 1; a <= b; a++)
	{
		x = num / z;
		num = num % z;
		z = z / 10;
		h++;
		_putchar(x + '0');
	}

	return (h);
}
