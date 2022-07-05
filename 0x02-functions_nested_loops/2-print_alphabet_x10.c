#include "main.h"

/**
 * main - print 10x the alphabet
 *
 * return: 0 
 */

void print_alphabet_x10(void)
{

int count = 10;
int i;

while (count > 0)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
count = count - 1;
}
_putchar('\n');
}
}
