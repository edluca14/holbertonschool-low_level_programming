#include <stdlib.h>
#include <stdio.h>
/**
 *
 */
int main(int argc, char *argv[])
{
	int eso;
	int tln;
	char *wasa;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	eso = strtol(argv[1], &wasa, 10);
	tln = strtol(argv[2], &wasa,10);
	printf("%d\n", eso * tln);
	return (0);
}
