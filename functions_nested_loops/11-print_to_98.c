#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98, followed by a
 * new line
 *
 * @n: variable with the numbers
 *
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	_putchar ('\n');
}
