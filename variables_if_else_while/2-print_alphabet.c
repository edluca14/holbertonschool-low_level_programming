#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Successful)
 *
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
		;
	{
		putchar (alphabet);
		alphabet++;
	}

	putchar ('\n');


	return (0);

}
