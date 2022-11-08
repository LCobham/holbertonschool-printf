#include "main.h"

/**
 * get_fun - gets the function to print a specific data type
 * @mych: char that determines format
 *
 * Return: pointer to fun to print that format
 */

int (*get_fun(char mych))(va_list)
{
	int i;
	get_print ar[] = {
		{'c', print_char},
		{'s', print_str},
		{'d', print_int},
		{'i', print_int},
		{'%', print_percent}
	};

	for (i = 0; i < 5; i++)
	{
		if (mych == ar[i].ch)
			return (ar[i].f);
	}
	return (NULL);
}
