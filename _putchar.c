#include "main.h"

/**
 * _putchar - print a char in stdout
 * @c: a char
 * Return: 1 on success, -1 on failure.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
