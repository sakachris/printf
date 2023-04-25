#include "main.h"

/**
 * int_to_binary - converts decimal to binary
 * @num: decimal to be converted
 *
 * Return: binary of decimal number
 */

long int_to_binary(int num)
{
	long bin = 0;
	int mod, i = 1;

	while (num != 0)
	{
		mod = num % 2;
		num = num / 2;
		bin = bin + mod * i;
		i = i * 10;
	}

	return (bin);
}

/**
 * is_binary - gets a binary value & prints it
 * @print: variadic variable
 *
 * Return: count of characters printed
 */

int is_binary(va_list print)
{
	unsigned int i, j = 1;
	unsigned int v, v1, v2 = 1;
	int num, bin, count = 0;

	bin = va_arg(print, int);
	num = int_to_binary(bin);

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
