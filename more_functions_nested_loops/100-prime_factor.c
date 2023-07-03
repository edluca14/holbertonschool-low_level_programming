#include <stdio.h>
/**
 * main - Write a program that finds and prints the largest prime factor of the
 * number
 *
 * Return: 0 (Successful)
 */
int main(void)
{
	long int n = 612852475143;
	int i;
	int neurona = 1;

	for (i = 2; i * i <= n; i++)
	{
		while (n % i == 0)
		{
			if (neurona < i)
			{
				neurona = i;
			}
			n /= i;
		}
	}
	if (n > neurona)
	{
		neurona = n;
	}

	printf("%d\n", neurona);
	return (0);
}
