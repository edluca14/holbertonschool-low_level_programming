#include "main.h"
/**
 *
 * print_alphabet - Writes a function that prints the alphabet,
 * in lowercase, followed by a new lines
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
