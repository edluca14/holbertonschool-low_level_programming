#include "main.h"
/**
 * print_diagonal - write a function that draws a diagonal line on the
 * terminal.
 *
 * @n: variable.
 *
 */
void print_diagonal(int n)
{
	int line = 0, space = 0;

	if (n > 0)
	{
		while (line < n)
		{
			while (space < line)
			{
				_putchar(' ');
				space++;
			}
			line++;
			space = 0;
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
