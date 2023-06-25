#include "main.h"
/**
 * string_toupper - Write a function that changes all lowercase letters of
 * a string to uppercase.
 *
 * @esotilin: parameter.
 *
 * Return: esotilin (Success).
 *
 */
char *string_toupper(char *esotilin)
{
	int i;

	for (i = 0; esotilin[i] != '\0'; i++)
	{
		if (esotilin[i] <= 122 && esotilin[i] >= 97)
		{
			esotilin[i] -= 32;
		}
	}
	return (esotilin);
}
