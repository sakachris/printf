#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

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

#endif
