#include "main.h"

/**
 * main - print 10x the alphabet
 *
 * print_alphabet_x10 : prints 10 times
 *
 * return: 0 
 */

void print_alphabet_x10(void)
{

int count = 0;
int i;

while (count < 10)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
count++;
}
_putchar('\n');
}
