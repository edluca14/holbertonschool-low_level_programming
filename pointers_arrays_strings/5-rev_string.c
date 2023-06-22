#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - write a function that reverses a string
 *
 * @s: parameter.
 *
 */
void rev_string(char *s)
{
	int tamano = strlen(s), i;
	char auxiliar;

	for (i = 0; i < tamano / 2; i++)
	{
		auxiliar = s[i];
		s[i] = s[tamano -1 -i];
		s[tamano -i -1] = auxiliar;
	}
}
