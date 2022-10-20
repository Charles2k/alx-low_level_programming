#include "main.h"

/**
  *_isdigit - checks for digit 0-9
  *
  *@c: character to be checked
  *
  *description - Prints 1 if c is digit and
  *0 if otherwise
  *
  *Return: 1 if c is a digit and 0 if not
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
		return (0);
}
