#include "main.h"
#include <stdio.h>
/**
 * reverse_array - write a function that reverses the content of an array of
 * integers.
 *
 * @a: parameter.
 * @n: parameter.
 *
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0; i < n / 2; i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}
