#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - Write a function that prints a string, followed
 * by a new line.
 *
 * @s: parameter that contains the string to be printed.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		printf("\n");
		return;
	}
	putchar (*s);
		_puts_recursion(s + 1);
}
