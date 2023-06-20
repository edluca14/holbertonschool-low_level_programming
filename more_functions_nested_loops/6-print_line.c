#include "main.h"
/**
 * print_line - write a function that draws a straight line in the terminal.
 *
 * @n: parameter, number of times the character _ is printed.
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');

}
