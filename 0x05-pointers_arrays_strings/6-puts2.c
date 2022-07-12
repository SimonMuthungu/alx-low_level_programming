#include "main.h"
/**
 * puts2 - prints everyother character
 *
 *  @str: string input
 *
 */

void puts2(char *str)
{
	int s = str;

	while (s != '\0')
	{
		_putschar(s);
		s++
	}
}
