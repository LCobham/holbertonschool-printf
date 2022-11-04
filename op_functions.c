#include "main.h"

/**
 * print_str - print a string.
 * @str1: string to print in stdout.
 *
 *Return: the number of characters printed.
 */

int print_str(char *str1)
{
	int i = 0, counter = 0;

	if (str1 == NULL)
		return (print_str("(null)"));
	for (i = 0; str1[i] != '\0'; i++)
		counter += _putchar(str1[i]);

	return (counter);

}
