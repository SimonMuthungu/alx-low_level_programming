#include "main.h"
#include <stdio.h>

 /**
 * _strlen - returns length of char
 *
 * @s: the string whose length to find
 *
 */
void _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count += 1;
	}
	return count;
}
