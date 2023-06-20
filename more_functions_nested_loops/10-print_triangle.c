#include "main.h"
/**
 * print_triangle - write a function that prints a triangle, followed by a new
 * line.
 *
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
	int filas, espacios, numerales;

	if (size > 0)
	{
		for (filas = 0; filas < size; filas++)
		{
			for (espacios = size - filas; espacios > 1; espacios--)
			{
				_putchar (32);
			}
			for (numerales = 0; numerales <= filas; numerales++)
			{
				_putchar (35);
			}
		_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
