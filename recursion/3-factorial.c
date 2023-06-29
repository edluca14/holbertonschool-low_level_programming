#include "main.h"
#include <stdio.h>
/**
 * factorial - write a function that returns the factorial of a given number.
 *
 * @n: parameter that contains the numbers.
 * 
 * Return: factorial of a given number.
 */
int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
