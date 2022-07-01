#include <sdtio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
printf("size of char: %i byte(s)\n", sizeof(char));
printf("size of int: %i byte(s)/n", sizeof(int));
printf("Size of a long int: %i byte(s)\n", sizeof(long int));
printf("Size of a long long int: %i byte(s)\n", sizeof(long long int));
printf("Size of a float: %i byte(s)\n", sizeof(float));

return (0);
}