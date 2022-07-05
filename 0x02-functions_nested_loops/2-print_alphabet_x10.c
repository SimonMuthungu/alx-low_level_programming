#include "main.h"

/**
 * print_alphabet_x10 - print alphabets "a..z"
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
_putchar('\n');
count++;
}
}
