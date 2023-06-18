#include "main.h"
/**
 * print_sign - Prints the sign of a number then returns 1 and print
 * s + if n grater than zero, returns 0 and prints 0 if is zero and returns -1
 * and prints - if n is less than zero.
 *
 * @n: Checks for the numbers
 *
 * Return: 1 if n greater than zero, 0 if n is zero and -1 if n is less than
 * zero
 *
 */

int print_sign(int n)

{
	if (n > 0)
	{
		_putchar (43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar (48);
		return (0);
	}
	else
	{
		_putchar (45);
		return (-1);
	}

	return (0);
}
