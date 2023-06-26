#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: The string to encode.
 *
 * Return: Pointer to the encoded string.
 */
char *leet(char *str)
{
	int i, j;
	char lett[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; lett[j] != '\0'; j++)
		{
			if (str[i] == lett[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}
	return (str);
}
