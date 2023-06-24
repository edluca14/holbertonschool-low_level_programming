#include "main.h"
#include <string.h>
/**
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int irt;

	for (irt = 0; src[irt] != '\0' && irt < n; irt++)
	{
		dest[irt] = src[irt];
	}
	dest[irt] = '\0';
	return (dest);
}
