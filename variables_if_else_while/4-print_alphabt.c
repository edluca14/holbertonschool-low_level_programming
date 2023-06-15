#include <stdio.h>
/**
 * main - Prints the alphabet without the letters q and e.
 *
 * Return: Always 0 (Successful)
 *
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' && alphabet != 'q' && alphabet != 'e';)
	{

		putchar(alphabet);
	}

		putchar('\n');

	return (0);

}
