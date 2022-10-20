#include "main.h"

/**
  *_isupper - Checks for uppercase character
  *
  *@c: character to be checked
  *
  *description - Prints 1 if c is uppercase and
  * 0 if c is otherwise
  *
  *Return: Always 0
  */
int _isupper(int c)
{
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
