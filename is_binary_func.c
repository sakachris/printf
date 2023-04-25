#include "main.h"

/**
 * int_to_binary - Entry point. Converts decimal to binary
 * @num: input decimal number to be converted
 * Return: binary decimal number (success)
*/
long int_to_binary(int num)
{
	long bry = 0;
	int a, b = 1;

	while (num != 0)
	{
		a = num % 2;
		num = num / 2;
		bry = bry + a * b;
		b = b * 10;
	}

	return (bry);
}

/**
 * is_binary - Entry point. Prints binary value.
 * @print: input variadic variables
 * Return: printed chars (success)
*/
int is_binary(va_list print)
{
	unsigned int a, b = 1;
	unsigned int x, y, zzz = 1;
	int num, bry, hh = 0;

	bry = va_arg(print, int);
	num = int_to_binary(bry);

	if (num < 0)
	{
		_putchar('-');
		hh++;
		num = num * -1;
	}

	y = num;
	while (y > 9)
	{
		y = y / 10;
		zzz = zzz * 10;
		b++;
	}

	for (a = 1; a <= b; a++)
	{
		x = num / zzz;
		num = num % zzz;
		zzz = zzz / 10;
		hh++;
		_putchar(x + '0');
	}

	return (hh);
}
