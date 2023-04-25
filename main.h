#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
#include <unistd.h>

int _puts(const char *str);
int _putchar(char c);
int _printf(const char *format, ...);
int (*get_specifier(const char *format))(va_list);

/**
 * struct specifier - struct specifier
 * @sp: input _printf specifier
 * @f: input function associated
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
long int_to_binaty(int num);
unsigned int to_unsign(unsigned int num);

#endif
