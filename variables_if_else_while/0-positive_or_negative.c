#include <stdlib.h>
#include <time.h>
/*
 * main - This program will assign a random number
 * to the variable n each time it is executed.
 * Complete the source code in order to print
 * whether the number stored in the variable n is positive or negative.
 * The variable n will store a different value
 * every time you will run this program.
 *
 * The output of the program should be:
 *                                      The number, followed by
 *                                                             if the number is greater than 0: is positive.
 *                                                             if the number is 0: is zero.
 *                                                             if the number is less than 0: is negative.
 *                                      Followed by a new line.
 *
 * Return: always 0.
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
{
	printf("%d is positive\n", n)
} else if (n == 0)
{
	printf("%d is zero\n", n)
}
else (n < 0)
{
	printf("%d is negative\n", n)
}

	return (0);
}
