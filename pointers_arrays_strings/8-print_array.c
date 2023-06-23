#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers, followed by a new
 * line.
 * @a: parameter, array.
 * @n: parameter, number of elements of the array.
 */
void print_array(int *a, int n)
{
	int contador;

	for (contador = 0; contador < n; contador++)
	{
		printf("%d", a[contador]);
		if (contador == n - 1)
		{
			continue;
		}
		printf(", ");
	}
	printf("\n");
}
