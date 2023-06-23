#include "main.h"
#include <string.h>
/**
 *
 */
char *_strcpy(char *dest, char *src)
{
	int count;
	int length = strlen(src);

	for (count = 0; count <= length; count++)
	{
		dest[count] = src[count];
	}

	return (dest);
}
