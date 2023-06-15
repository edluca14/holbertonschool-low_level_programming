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

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		putchar(alphabet);
	}

		putchar('\n');

	return (0);

}
