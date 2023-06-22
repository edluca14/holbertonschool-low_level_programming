#include "main.h"
/**
 *
 *
 */
void rev_string(char *s)
{
	int count = 0;

	while (*s != 0)
	{
		_putchar (*s);
		s++;
	}
	_putchar ('\n');

	while (s[count] != 0)
	{
		count++;
	}
	while (count > 0)
	{
		count--;
		_putchar (s[count]);
	}
}
