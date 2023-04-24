#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints to stdout & takes several arguments
 * @format: arguments passes
 *
 * Return: count of items printed
 */
int _printf(const char *format, ...)
{
	int i = 0;
	int num = 0;
	int count = 0;
	va_list print;
	int (*function)(va_list);

	va_start(print, format);
	while (format[i])
	{
		if (format[i] != '%')
		{
			num = _putchar(format[i]);
			count += num;
			i++;
			continue;
		}
		else
		{
			function = get_specifier(&format[i + 1]);

			if (function)
			{
				num = function(print);
				count += num;
				i = i + 2;
				continue;
			}
			if (format[i + 1] != '\0')
			{
				num = _putchar(format[i + 1]);
				count += num;
				i = i + 2;
				continue;
			}
		}
	}

	return (count);
}
