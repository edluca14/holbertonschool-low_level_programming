#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int number;
	int sum = 0;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		number = atoi(argv[i]);
		sum += number;
	}
	printf("%d\n", sum);

	return (0);
}
