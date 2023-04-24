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
		{NULL, NULL}
	};

	int i = 0;

	while (i < 3)
	{
		if (*format == *sf[i].sp)
		{
			return (sf[i].f);
		}
		i++;
	}

	return (NULL);
}
