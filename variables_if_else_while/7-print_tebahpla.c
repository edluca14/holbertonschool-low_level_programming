#include <stdio.h>
/**
 * main - Prints the alphabet backwards
 *
 * Return: Always 0 (Successful)
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'z'; alphabet >= 'a'; alphabet++)
	{
		putchar(alphabet);
	}

		putchar('\n');

	return (0);

}

