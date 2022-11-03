#include "main.h"

/**
 * _printf - print a formated string to stdout.
 * @format: string to print
 *
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	char ch, *str;
	int i = 0, j = 0;
	int counter = 0;
	va_list ap;

	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			counter += _putchar(format[i]);
		else
		{
			if (format[i + 1] == 'c')
			{
				ch = va_arg(ap, int);
				counter += _putchar(ch);
				i++;
			}
			else if (format[i + 1] == 's')
			{
				str = va_arg(ap, char *);
				for (j = 0; str[j] != '\0'; j++)
				{
					counter += _putchar(str[j]);
				}
				i++;
			}
		}
	}
	return (counter);
}
