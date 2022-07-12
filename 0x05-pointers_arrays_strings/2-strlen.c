#include "main.h"
#include <stdio.h>

 /**
 * _strlen - returns length of s
 *
 * @s: the string whose length to find
 *
 *return: string length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s++)
	{
		count += 1;
	}
	return count;
}
