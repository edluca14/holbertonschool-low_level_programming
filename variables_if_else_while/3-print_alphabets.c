#include <stdio.h>
/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Successful)
 *
 */
int main(void)
{
	char alphabet, mayus;

	for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
	{
		putchar(alphabet);
	}
	for (mayus = 'A'; mayus <= 'Z'; mayus++)
	{
		putchar(mayus);
	}

		putchar('\n');

	return (0);

}

