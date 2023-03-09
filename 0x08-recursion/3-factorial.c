#include "main.h"
/**
 * factorial - a function calculating the factorial of a number
 * @n: the number
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
	return (0);
}
