#include "main.h"
/**
 *
 */
char *_strchr(char *s, char c)
{
	int count;

	for (count = 0; s[count] != c && s[count] != '\0'; count++);
	
	if (s[count] == c)
	{
		return (s + count);
	}
	
	return ('\0');
}
