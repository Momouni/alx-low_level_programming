#include "main.h"
/**
 * _pow_recursion - function calculating the value of x raised to the power y
 * @x: the number to be raised to a power
 * @y: the power that x will be raised to
 * Return: 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
	return (0);
}
