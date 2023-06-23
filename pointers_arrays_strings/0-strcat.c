#include "main.h"
#include <string.h>
/**
 * _strcat - write a function that concatenates two strings.
 *
 * @dest: parameter.
 * @src: parameter.
 *
 * Return: Always dest (success).
 *
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
