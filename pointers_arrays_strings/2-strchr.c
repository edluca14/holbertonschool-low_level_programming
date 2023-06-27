#include "main.h"
/**
 * _strchr - write a function that locates a character in a string.
 *
 * @s: parameter.
 * @c: parameter.
 *
 * Return: the pointer to the first occurence of c in the string, NULL
 * otherwise.
 *
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != c && s[count] != '\0'; count++);

	if (s[count] == c)
	{
		return (s + count);
	}

	return ('\0');
}
