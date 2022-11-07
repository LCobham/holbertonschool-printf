#include "main.h"

/**
 * _printf - print a formated string to stdout.
 * @format: string to print
 *
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	char F;
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
			F = format[i + 1];
			switch (F)
			{
				case 'c':
					counter += _putchar(va_arg(ap, int));
					break;
				case 's':
					counter += print_str(ap);
					break;
				case 'd':
				case 'i':
					counter += print_int(ap);
					break;
				case '%':
					counter += _putchar('%');
					break;
				case '\0':
					exit(99);
				default:
					counter += _putchar('%');
					break;
			}
			if (F == 'c' || F == 's' || F == 'd' || F == 'i' || F == '%')
				i++;
		}
	}
	va_end(ap);
	return (counter);
}
