#include "main.h"

/**
 * get_specifier - Entry point. Selects specifier from _printf
 * @format: input formatted selected specifier
 * Return: a pointer to specifier (success)
*/
int (*get_specifier(const char *format))(va_list)
{
	spec sff[] = {
		{"c", is_char},
		{"s", is_string},
		{"%", is_percent},
		{"i", is_int},
		{"d", is_decimal},
		{"b", is_binary},
		{"u", is_unsign},
		{NULL, NULL}
	};

	int b = 0;

	while (b < 6)
	{
		if (*format == *sff[b].sp)
			return (sff[b].f);
		b++;
	}

	return (NULL);
}
