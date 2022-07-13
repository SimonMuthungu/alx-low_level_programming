#include "main.h"
#include <stdio.h>
/**
 * _strncat - concats two chars
 *
 *  @dest: string one
 *  @src: string two
 *  @int: integer n
 */
int _strncat(char *dest, char *src, int n)
{
	int length = src::size;
	
	if (n > length)
	{
		newstr = src;
	} 
	else
	{
		for (i = 0;i <= n-1;i++)
		{
			newstr = src[i];
		}
	}
	*dest = dest, newstr;
	return (dest);
}
