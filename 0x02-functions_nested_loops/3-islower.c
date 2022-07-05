#include "main.h"

/**
 * @c - checks for lowercase
 *
 * Return: Always zero
 */
int _islower(int c);

{
	if (c > 'a' && c < 'z')
	{
		return 1;
	}
	else 
	{
		return 0;
	}
}
