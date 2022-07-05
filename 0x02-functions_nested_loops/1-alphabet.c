#include "main.h" /*main file header*/

/**
 * main- calls a function
 *
 * Return 0
 *
 */

void print_alphabet(void)
{
	int i;
	
	for (i = 'a'; i <= 'z'; i++);
	{
		_putchar(i);
	}
	putchar('\n');
	return (0);
}
