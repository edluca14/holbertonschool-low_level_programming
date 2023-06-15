#include <stdio.h>
/**
 * main - Prints all the single digit numbers of base 10 starting from 0, follo
 * wed by a new line.
 *
 * Return: Always 0.
 *
 */
int main(void)
{
	char numbers;

	for (numbers = 0; numbers <= 9; numbers++)
	{
		putchar(numbers);
	}
	{
		putchar('\n');
	}
}
