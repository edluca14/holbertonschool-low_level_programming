#include "main.h"
/**
 *
 * main - Writes a function that prints the alphabet, in lowercase, followed by
 * a new line
 *
 * Return: Always 0 (Success)
 *
 */
void print_alphabet(void)
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar (abc);
	}

		_putchar ('\n');

}
