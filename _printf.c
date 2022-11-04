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
	int i = 0, counter = 0;
	va_list ap;

	if (format == NULL)
		exit(98);
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
				counter += print_str(str);
				i++;
			}
			else if (format[i + 1] == '%')
			{
				counter += _putchar('%');
				i++;
			}
			else if (format[i + 1] == '\0')
			{
				exit(99);
			}
			else
				counter += _putchar('%');
		}
	}
	va_end(ap);
	return (counter);
}
