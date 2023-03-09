#include "main.h"
/**
 * square - recursion function to calculate the square root of a number
 * @i: integer starting from one
 * @j: the number we want to have its square root
 * Return: 0
 */

int square(int i, int j)
{
	if (i * i == j)
		return (i);
	if (i * i > j)
		return (-1);
	else
		return (square(i + 1, j));
}

/**
 * _sqrt_recursion - a function to calculate the square root of a number
 * @n: the number to check its square root
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	int k = 1;

	if (n <= 0)
		return (-1);
	if (n == 1)
		return (1);
	else
		return (square(k, n));
}
