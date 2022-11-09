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
	int counter = 0;

	counter += _printf("0x");
	return (counter + change_base(p, 16, 'm'));
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

	for (count = 0; i >= 0; i--)
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
