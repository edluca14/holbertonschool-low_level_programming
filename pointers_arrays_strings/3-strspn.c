#include "main.h"
#include <stdbool.h>
/**
 * _strspn - Write a function that gets the length of a prefix substring.
 *
 * @s: string that may contain characters.
 * @accept: string that checks the characters from the main string.
 *
 * Return: The length of the prefix substring of s that only contains
 * characters from accept (success).
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
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
		if (isIncluded == false)
		{
			return (i);
		}
	}
	return (i);
}
