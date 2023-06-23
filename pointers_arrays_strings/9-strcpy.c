#include "main.h"
#include <string.h>
/**
 * *_strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.\
 *
 * @dest: parameter
 * @src: parameter
 *
 * Return: Always dest (Success)
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	int length = strlen(src);

	for (count = 0; count <= length; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
