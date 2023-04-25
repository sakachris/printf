#include "main.h"

/**
 * _puts - Entry point. Prints a string excluding terminating char.
 * @str: input string to be printed
 * Return: printed chars (success)
*/
int _puts(const char *str)
{
	int b = 0;
	int num = 0;

	if (str)
	{
		while (str[b] != '\0')
		{
			_putchar(str[b]);
			num += 1;
			b++;
		}
	}

	return (num);
}
