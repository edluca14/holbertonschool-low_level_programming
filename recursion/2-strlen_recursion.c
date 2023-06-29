#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - write a function that returns the length of a string.
 *
 * @s: parameter that contains the string.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	return (length);
}
