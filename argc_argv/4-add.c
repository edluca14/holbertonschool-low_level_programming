#include <stdlib.h>
#include <stdio.h>
/**
 * main - Write a program that adds positive numbers.
 * @argc: parameter
 * @argv: parameter
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;
	int number;
	int sum = 0;
	char *ptr = '\0';

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		number = strtol(argv[i], &ptr, 10);
		if (*ptr != '\0')
		{
			printf("Error\n");
			return (1);
		}
		sum += number;
	}
	printf("%d\n", sum);

	return (0);
}
