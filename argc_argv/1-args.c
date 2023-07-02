#include <stdio.h>
#include <stdlib.h>
/**
 * main - Write a program that prints the number of arguments passed into it.
 *
 * @argc: parameter
 * @argv: parameter
 *
 * Return: 0 (Succeess)
 */
int main(int argc, char *argv[])
{
	argv++;

	printf("%d\n", argc - 1);

	return (0);
}
