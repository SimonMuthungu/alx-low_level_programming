#include "main.h"
/**
 * _puts_recursion - a recursion method
 * @s: the char to be printed
 * return (1): not success
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_putchar(s[i]);

	{
		return (1);
	}
	_puts_recursion(s[i + 1]);
}
