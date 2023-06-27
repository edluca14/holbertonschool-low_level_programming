#include "main.h"
#include <stdbool.h>
/**
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	bool isIncluded;

	for (i = 0; s[i] != '\0'; i++)
	{
		isIncluded = false;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				isIncluded = true;
				break;
			}
		}
		if (isIncluded == true)
		{
			return (s + i);
		}
	}
	return (s + i);
}
