#include "main.h"
#include <string.h>
/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: string.
 *
 */
void puts_half(char *str)
{
	int mitad;
	int	longitud = strlen(str);

	for (mitad = (longitud + 1) / 2; mitad < longitud; mitad++)
		{
			_putchar (str[mitad]);
		}
	_putchar ('\n');
}
