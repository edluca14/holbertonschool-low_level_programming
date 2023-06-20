#include "main.h"
/**
 * print_most_numbers - write a function that prints the numbers, from 0 to 9,
 * followed by a new line. without 2 and 4.
 *
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n == 2 || n == 4)
		{
			continue;
		}
		_putchar (n + '0');
	}
	_putchar ('\n');
}
