#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
int _putchar(char c);
int _puts(const char *str);
int _printf(const char *format, ...);
int (*get_specifier(const char *format))(va_list);

/**
 * struct specifier - struct specifier
 * @sp: _printf specifier
 * @f: function associated
 */
typedef struct specifier
{
	char *sp;
	int (*f)(va_list);
} spec;

int is_char(va_list);
int is_string(va_list);
int is_percent(va_list);
#endif /* _MAIN_H_ */
