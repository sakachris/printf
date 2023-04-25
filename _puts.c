#include "main.h"

/**
 * _puts - prints a string excluding terminating character
 * @str: string to print
 *
 * Return: count of characters printed
 */
int _puts(const char *str)
{
	int i = 0, count = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			count += 1;
			i++;
		}
	}

	return (count);
}
