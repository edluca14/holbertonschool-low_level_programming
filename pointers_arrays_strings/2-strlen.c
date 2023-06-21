#include "main.h"
#include <stdio.h>
/**
 * _strlen - returns the length of a string.
 *
 * @s: parameter.
 *
 * Return: the number of increases of contador until *s hits 0
 */
int _strlen(char *s)
{
	int contador = 0;

	while (*s != 0)
	{
		contador++;
		s++;
	}
	return (contador);
}
