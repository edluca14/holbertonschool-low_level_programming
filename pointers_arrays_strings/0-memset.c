#include "main.h"
/**
 *
 * _memset - Write a function that fills memory with a constant byte.
 *
 * @s: parameter
 * @b: parameter
 * @n: parameter
 *
 * Return: s (Successful)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
