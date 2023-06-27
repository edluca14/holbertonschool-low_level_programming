#include "main.h"
#include <stdbool.h>
/**
 * _strpbrk - Write a function that searches a string for any of a set of
 * bytes.
 *
 * @s: parameter.
 * @accept: parameter.
 *
 * Return: pointer to the first character of s that belongs to accept or NULL
 * if s and accept have no character in common.
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
	return ('\0');
}
