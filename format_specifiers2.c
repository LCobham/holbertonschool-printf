#include "main.h"

/**
 * S_format_specifier - prints a string. Non-printable chars in ASCII
 * @ap: argument pointer
 *
 * Return: number of chars printed.
 */

int S_format_specifier(va_list ap)
{
	int i, counter = 0;
	char *s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 32 && s[i] < 127)
			counter += _putchar(s[i]);
		else
		{
			if (s[i] < 16)
				counter += _printf("\\x0%X", s[i]);
			else
				counter += _printf("\\x%X", s[i]);
		}
	}
	return (counter);
}


/**
 * print_pointer - print a pointer
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int print_pointer(va_list ap)
{
	unsigned long int p = va_arg(ap, unsigned long int);
	int i, t = 0, counter = 0;
	char *hex = "0123456789abcdef";

	if ((void *) p == NULL)
		return (_printf("(nil)"));
	counter += _printf("0x");
	for (i = 15; i >= 0; i--)
	{
		if (t == 1)
			counter += _putchar(hex[(p / _pow(16, i)) % 16]);

		else if ((p / _pow(16, i)) % 16 > 0 || i == 0)
		{
			t = 1;
			counter += _putchar(hex[(p / _pow(16, i)) % 16]);
		}
	}
	return (counter);
}


/**
 * r_format_specifier - handle the %r format specifier
 * @ap: argument pointers
 *
 * Return: number of chars printed
 */

int r_format_specifier(va_list ap)
{
	char *s = va_arg(ap, char *);
	int i, count;

	for (i = 0; s[i] != '\0'; i++)
		continue;

	for (i--, count = 0; i >= 0; i--)
	{
		count += _putchar(s[i]);
	}
	return (count);
}


/**
 * R_format_specifier - ROT13 a string and print it
 * @ap: argument pointer
 *
 * Return: number of chars printed
 */

int R_format_specifier(va_list ap)
{
	int i, count = 0;
	char *s = va_arg(ap, char *);

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			count += _putchar(s[i] + 13);
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			count += _putchar(s[i] - 13);
		else
			count += _putchar(s[i]);
	}
	return (count);
}
