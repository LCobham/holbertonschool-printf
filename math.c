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

	for (i = 0; i < b; i++)
		result *= a;
	return (result);
}
