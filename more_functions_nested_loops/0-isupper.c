#include "main.h"
/**
  * _isupper - write a function that checks for uppercase character.
  *
  * @c: looks for a character.
  * 
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
