#include "main.h"
/*
 * _isdigit - Write a function that checks for a digit 0 through 9.
 *
 * @c: variable that looks for digits.
 *
 * Return: 1 if its a digit or 0 if else.
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
