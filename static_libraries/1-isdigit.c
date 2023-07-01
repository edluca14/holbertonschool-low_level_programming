#include "main.h"
/**
 * _isdigit - write a function that checks for a digit.
 *
 * @c: variable that looks for a number.
 *
 * Return: 1 if the variable its a digit and 0 otherwise.
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
