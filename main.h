#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
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
int is_int(va_list);
int is_decimal(va_list);
int is_binary(va_list);
int is_unsign(va_list);
long int_to_binary(int num);
unsigned int to_unsign(unsigned int num);
#endif /* _MAIN_H_ */
