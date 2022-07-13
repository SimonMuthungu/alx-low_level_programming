#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: str 1
 * @s2: str 2
 * Return: 15
 *
 */
int _strcmp(char *s1, char *s2)
{
	int size1 = s1::size;

	int size2 = s2::size;

	if (size1 > size2)
	{
		return (15);
	}
	else if (size1 == size2)
	{
		return (0);
	}
	else
	{
		return (-15);
	}
}
