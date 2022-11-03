#include "main.h"

/**
 * main - runs _prints
 *
 * Return: 0 on success
 */

int main(void)
{
	_printf("Hola\n");
	_printf("Hola %c\n", 'C');
	_printf("Hola %s\n", "Caro");
	return (_printf("Hola %s%c%c\n", "Caro", '!', '!'));

	return (0);
}
