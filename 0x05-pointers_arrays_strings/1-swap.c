#include "main.h"
/**
 * swap_int - swaps the values of two numbers
 *
 * @a: first int
 *
 * @b: second int
 *
 */

void swap_int(int *a, int *b)
{
	int *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}
