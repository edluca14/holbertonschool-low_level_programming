#include "main.h"
#include <stdio.h>
/**
 * _pow_recursion - Write a function that returns the value of x raised to the
 * power of y.
 *
 * @x: parameter
 * @y: parameter
 *
 * Return: x raised to the power of y, -1 if y is lower than 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
