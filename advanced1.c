#include "main.h"

/**
 * print_binary - print an unsigned int in binary, retrieved with va_arg
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int print_binary(va_list ap)
{
	int i, t, count = 0;
	unsigned int u = va_arg(ap, int), x;

	for (i = 31, t = 0; i >= 0; i--)
	{
		x = u / (unsigned int) _pow(2, i);
		if (x > 0 || i == 0)
			t = 1;
		if (t == 1)
			count += _putchar(x % 2 + '0');
	}
	return (count);
}


/**
 * print_unsigned - print an unsigned int
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int print_unsigned(va_list ap)
{
	int x, i, count = 0, t = 0;
	int n = va_arg(ap, int);

	for (i = 9; i >= 0; i--)
	{
		if (n / (unsigned int) _pow(10, i) != 0 || i == 0)
			t = 1;
		if (t == 1)
		{
			x = (n / (unsigned int) _pow(10, i) % 10);
			count += _putchar(x + '0');
		}
	}
	return (count);
}


/**
 * print_octal - print a number in octal notation
 * @ap: argument pointer, pointing to an int
 *
 * Return: number of chars printed
 */

int print_octal(va_list ap)
{
	int i, t = 0, count = 0;
	unsigned int x, n = va_arg(ap, unsigned int);

	for (i = 10; i >= 0; i--)
	{
		if (n / (unsigned int) _pow(8, i) || i == 0)
			t = 1;
		if (t == 1)
		{
			x = (n / (unsigned int) _pow(8, i)) % 8;
			count += _putchar(x + '0');
		}
	}
	return (count);

}


/**
 * print_hex - print a long int in hexadecimal format
 * @ap: argument pointer
 * @mayus: 
 *
 * Return: number of chars printed
 */

int print_hex(va_list ap)
{
	unsigned long int n = va_arg(ap, unsigned long int);
	int i, j, x, t = 0, count = 0;
	int ar[6][3] = {
		{10, 'a', 'A'},
		{11, 'b', 'B'},
		{12, 'c', 'C'},
		{13, 'd', 'D'},
		{14, 'e', 'E'},
		{15, 'f', 'F'}};

	for (i = 8; i >= 0; i--)
	{
		x = (n / long_pow(16, i));
		if (x > 0 || i == 0)
			t = 1;

		if (t == 1)
		{
			if (x % 16 < 10)
				count += _putchar(x % 16 + '0');
			else
				for (j = 0; j < 6; j++)
				{
					if (x == ar[j][0])
						count += _putchar(ar[j][1]);
				}
		}
	}
	return (count);
}

