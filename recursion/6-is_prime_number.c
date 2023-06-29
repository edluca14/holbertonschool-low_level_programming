#include "main.h"
#include <stdio.h>
/**
 *
 */
int i = 2;
int is_prime_number2(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n == i)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	i++;
	return (is_prime_number2(n));
}
int is_prime_number(int n)
{
	i = 2;

	return (is_prime_number2(n));
}
