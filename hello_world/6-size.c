#include <stdio.h>
/**
 * main - Prints the size of various
 *        types on the computer it is compiled and run on
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(d));
	printf("Size of an int: %lu bytes(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(c));
	printf("Size of a float: %lu byte(s)", sizeof(f));

	return (0);
}
