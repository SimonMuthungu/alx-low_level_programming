#include "main.h"

/**
*_isalpha() checks for alpha
*
*Return: 0 (Always success)
*/

int _isalpha(char c)
{
char i,d;
for (i = 'a'; i <= 'z'; i++)
{
  for (d = 'A'; d <= 'Z'; d++)
  {
  if (c == i || c == d)
  {
    return (1);
  }
  else
  {
    return (0);
  }
  }
  }
}
