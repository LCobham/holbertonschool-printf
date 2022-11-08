#include "main.h"

/**
 * abs - calculate absolute value of an integer
 * @x: integer to calculate
 *
 * Return: absolute value
 */

int abs(int x)
{
	return ((x >= 0) ? x : -x);
}

/**
 * _pow - calculate a to the power of b.
 * @a: positive integer
 * @b: positive integer
 *
 * Return: a^b
 */

int _pow(int a, int b)
{
	int i, result = 1;

	if (a == 0 && b == 0)
		exit(98);
	else if (b == 0)
		return (1);

	for (i = 0; i < b; i++)
		result *= a;
	return (result);
}


/**
 * long_pow - calculate a to the power of b.
 * @a: positive integer
 * @b: positive integer
 *
 * Return: a^b
 */

unsigned long int long_pow(int a, int b)
{
	int i;
	unsigned long int result = 1;

	if (a == 0 && b == 0)
		exit(98);
	else if (b == 0)
		return (1);

	for (i = 0; i < b; i++)
		result *= a;
	return (result);
}

