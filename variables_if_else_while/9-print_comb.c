#include <stdio.h>
/**
 * main - Prints all the single digit numbers of base 10 starting from 0, follo
 * wed by a new line.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n + '0');
		{
			continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

