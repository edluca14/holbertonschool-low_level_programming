#include "main.h"
#include <stdio.h>
/**
 *
 */
int _sqrt_recursion2(int n, int i)
{
	if (n < 1)
		{
			return (-1);
		}
	if (n / i == i)
		{
			return (i);
		}
	return (_sqrt_recursion2(n, i + 1));
}
int _sqrt_recursion(int n)
{
	return (_sqrt_recursion2(n, 1));
}
