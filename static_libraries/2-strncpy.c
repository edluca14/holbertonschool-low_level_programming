#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strncpy - Write a function that copies a string.
 *
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: Always dest (Success)
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int irt;

	for (irt = 0; src[irt] != '\0' && irt < n; irt++)
	{
		dest[irt] = src[irt];
	}
	while (irt < n)
	{
		dest[irt] = '\0';
		irt++;
	}
	return (dest);
}
