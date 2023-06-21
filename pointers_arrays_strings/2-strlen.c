#include "main.h"
#include <stdio.h>
/**
 * strlen - returns the length of a string.
 *
 * @s: parameter.
 *
 */
int _strlen(char *s)
{
	int contador= 0;

	while (*s != 0)
	{
		contador++;
		s++;
	}
	return (contador);
}
