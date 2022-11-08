#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

/**
 * struct get_print - struct that will be used to get print function
 * @ch: char representing what will be printed
 * @f: pointer to function
 */

typedef struct get_print
{
	char ch;
	int (*f)(va_list ap);
} get_print;

int _putchar (char c);
int _printf(const char *format, ...);
int print_str(va_list ap);
int abs(int x);
int _pow(int a, int b);
int print_int(va_list ap);
int print_char(va_list ap);
int print_percent(va_list __attribute__ ((unused)) ap);
int (*get_fun(char mych))(va_list);
int print_binary(va_list ap);
int print_unsigned(va_list ap);
int print_octal(va_list ap);
int print_hex(va_list ap);
unsigned long int long_pow(int a, int b);

#endif

#ifndef STDLIB_H
#define STDLIB_H

#include <stdlib.h>

#endif
