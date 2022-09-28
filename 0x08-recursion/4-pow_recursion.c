#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: number to be used
 * @y: expotent to be used
 *
 * Return: x ^ y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _power_recursion(x, y -1));
}
