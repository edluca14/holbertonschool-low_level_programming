#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Write a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 *
 * @a: parameter.
 * @size: parameter.
 */
void print_diagsums(int *a, int size)
{
	int diag1 = 0, diag2 = 0;
	int i;

	for (i = 0; i < size; i++)
	{
		diag1 += a[i * size + i];
		diag2 += a[(i + 1) * size - 1 - i];
	}
	printf("%d, %d\n", diag1, diag2);
}
