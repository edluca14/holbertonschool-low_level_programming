#include "main.h"
/**
 * _memcpy - write a function that copies memory area.
 *
 * @dest: parameter.
 * @src: parameter.
 * @n: parameter.
 *
 * Return: dest (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
