#include "main.h"
/**
 * _islower - Writes a function that checks for lowercase character
 * @c: the character to be checked
 *
 * Return: 1 if c is lower case, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
