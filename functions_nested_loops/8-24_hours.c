#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting from 00:
 * 00 to 23:59
 *
 */
void jack_bauer(void)
{
	char horas, minutos;

	for (horas = 0; horas < 23 ; horas++)
	{
		for (minutos = 0; minutos < 59; minutos++)
		{
			_putchar((horas / 10) + '0');
			_putchar((horas % 10) + '0');
			_putchar(':');
			_putchar((minutos / 10) + '0');
			_putchar((minutos % 10) + '0');
		}
	}
}
