#include "main.h"
/**
 * print_square - prints a square followed by a new line.
 *
 * @size: the size of the square.
 *
 */
void print_square(int size)
{
	int alto, ancho;

	if (size > 0)
	{
		for (alto = 0; alto < size; alto++)
		{

		for (ancho = 0; ancho < size; ancho++)
		{
			_putchar ('#');
		}

		_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
