#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - write a function that returns the length of a string.
 *
 * @s: parameter that contains the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return 0;
	}
	else
	{
		return (_strlen_recursion(s + 1) + 1);
	}
}
