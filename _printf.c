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
	int i = 0, num = 0, count = 0;
	va_list print;
	int (*function)(va_list);

	va_start(print, format);
	if (format == NULL)
		return (-1);
	while (format[i] && format)
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
				num = _putchar(format[i]);
				count += num;
				i++;
				continue;
			}
			if (format[i + 1] == '\0')
				return (-1);
		}
	}
	va_end(print);
	return (count);
}
