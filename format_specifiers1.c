#include "main.h"

/**
 * print_binary - print an unsigned int in binary, retrieved with va_arg
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int print_binary(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (change_base(n, 2, 'm'));
}


/**
 * print_unsigned - print an unsigned int
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int print_unsigned(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (change_base(n, 10, 'm'));
}

/**
 * print_octal - print a number in octal notation
 * @ap: argument pointer, pointing to an int
 *
 * Return: number of chars printed
 */

int print_octal(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (change_base(n, 8, 'm'));
}


/**
 * print_hex - print an int in hexadecimal format
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int print_hex(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (change_base(n, 16, 'm'));
}


/**
 * print_HEX - print an int in hexadecimal (w capitalized chars)
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int print_HEX(va_list ap)
{
	unsigned int n = va_arg(ap, unsigned int);

	return (change_base(n, 16, 'M'));
}
