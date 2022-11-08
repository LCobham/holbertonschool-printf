#include "main.h"

/**
 * _printf - print a formated string to stdout.
 * @format: string to print
 *
 * Return: 0 on success
 */

int _printf(const char *format, ...)
{
	int i = 0, counter = 0;
	int (*fun)(va_list);
	va_list ap;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			counter += _putchar(format[i]);
		else
		{
			if (format[i + 1] == '\0')
				return (-1);

			fun = get_fun(format[i + 1]);
			if (fun != NULL)
			{
				counter += (*fun)(ap);
				i++;
			}
			else
				counter += _putchar(format[i]);
		}
	}
	va_end(ap);
	return (counter);
}
