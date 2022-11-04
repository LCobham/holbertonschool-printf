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

/**
 * print_int - print an int.
 * @n: int
 *
 * Return: number of characters printed
 */

int print_int(int n)
{
	int x, i, count = 0, t = 0;

	if (n < 0)
		_putchar('-');
	for (i = 9; i > 0; i--)
	{
		if (n / _pow(10, i) != 0)
			t = 1;
		if (n / _pow(10, i) == 0 && t == 0)
			continue;

		x = abs((n / _pow(10, i) % 10));
		count += _putchar(x + '0');
	}
	return (count);
}
