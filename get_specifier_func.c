#include "main.h"

/**
 * get_specifier - selects the specifier from _printf
 * @format: specifier selected
 *
 * Return: pointer to appropriate specifier function
 */
int (*get_specifier(const char *format))(va_list)
{
	spec sf[] = {
		{"c", is_char},
		{"s", is_string},
		{"%", is_percent},
		{"i", is_int},
		{"d", is_decimal},
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (*format == *sf[i].sp)
		{
			return (sf[i].f);
		}
		i++;
	}

	return (NULL);
}
