#include "main.h"

/**
 * print_str - print a string.
 * @ap: argument pointer, currently pointing at str
 *
 *Return: the number of characters printed.
 */

int print_str(va_list ap)
{
	int i = 0, counter = 0;
	char *str1 = va_arg(ap, char *), *null = "(null)";

	if (str1 == NULL)
	{
		for (i = 0; null[i] != '\0'; i++)
			counter += _putchar(null[i]);
		return (counter);
	}

	for (i = 0; str1[i] != '\0'; i++)
		counter += _putchar(str1[i]);

	return (counter);

}

/**
 * print_int - print an int.
 * @ap: argument pointer, currently pointing at int
 *
 * Return: number of characters printed
 */

int print_int(va_list ap)
{
	int x, i, count = 0, t = 0;
	int n = va_arg(ap, int);

	if (n < 0)
		count += _putchar('-');
	for (i = 9; i >= 0; i--)
	{
		if (n / (int) _pow(10, i) != 0 || i == 0)
			t = 1;
		if (n / (int) _pow(10, i) == 0 && t == 0)
			continue;

		x = abs((n / (int) _pow(10, i) % 10));
		count += _putchar(x + '0');
	}
	return (count);
}


/**
 * print_char - print a char using a va_list arg
 * @ap: argument pointer
 *
 * Return: 1 on success
 */

int print_char(va_list ap)
{
	char ch;

	ch = va_arg(ap, int);
	return (_putchar(ch));
}


/**
 * print_percent - print a single percent sign
 * @ap: argument pointer
 *
 * Return: 1 on success
 */

int print_percent(va_list __attribute__ ((unused)) ap)
{
	return (_putchar('%'));
}


/**
 * change_base - print a number in a different base
 * @num: number to be printed in different base
 * @base: base of result. Available options: 2, 8, 10, 16
 * @m: 'm' for lowercase, else for uppercase
 *
 * Return: number of chars printed
 */

int change_base(unsigned long int num, int base, char m)
{
	char *hex_m = "0123456789abcdef";
	char *hex_M = "0123456789ABCEDF";
	int i, t = 0, counter = 0;
	long int x;

	switch (base)
	{
		case 2:
			i = 32;
			break;
		case 8:
			i = 12;
			break;
		case 10:
			i = 9;
			break;
		case 16:
			i = 12;
			break;
		default:
			i = 16;
			break;
	}
	for (; i >= 0; i--)
	{
		x = (long int) num / _pow(base, i);
		if (x > 0 || i == 0)
			t = 1;
		if (t == 1)
		{
			if (m == 'm')
				counter += _putchar(hex_m[x % base]);
			else
				counter += _putchar(hex_M[x % base]);
		}
	}
	return (counter);
}
