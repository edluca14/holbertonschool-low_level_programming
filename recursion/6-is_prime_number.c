#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - Write a function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 *
 * @n: parameter
 *
 * return: 1 if the input is a prime number, 0 otherwise.
 */
int is_prime_number2(int n, int i)
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
	return (is_prime_number2(n, i + 1));
}
int is_prime_number(int n)
{
	return (is_prime_number2(n, 2));
}
