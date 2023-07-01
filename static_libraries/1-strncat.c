#include "main.h"
#include <string.h>
/**
 * _strncat - writes a function that concatenates two strings.
 *
 * @dest: parameter.
 * @src: parameter.
 * @n: parameter.
 *
 * Return: Always char pointer (Success).
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
