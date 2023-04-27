#include "main.h"

/**
 * _printf - Entry point. Produce output according to a format.
 * @format: input formated argument to be printed
 * ...: input list of arguments
 * Return: number of printed output (success)
*/
int _printf(const char *format, ...)
{
	int b = 0, number = 0, output = 0;
	va_list list;
	int (*function)(va_list);

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format[b] && format)
	{
		if (format[b] != '%')
		{
			number = _putchar(format[b]);
			output += number;
			b++;
			continue;
		}
		else
		{
			function = get_specifier(&format[b + 1]);

			if (function)
			{
				number = function(list);
				output += number;
				b = b + 2;
				continue;
			}
			if (format[b + 1] != '\0')
			{
				number = _putchar(format[b]);
				output += number;
				b++;
				continue;
			}
			if (format[b + 1] == '\0')
				return (-1);
		}
	}
	va_end(list);
	return (output);
}
