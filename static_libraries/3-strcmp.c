#include "main.h"
#include <string.h>
/**
 * _strcmp - write a function that compares two strings.
 *
 * @s1: parameter.
 * @s2: parameter.
 *
 * Return: Always the result of subtraction of s1[i] and s2[i] that are not
 * equal (Success)
 *
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}
	return (s1[i] - s2[i]);
}
