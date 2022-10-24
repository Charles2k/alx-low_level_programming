#include "main.h"

/**
  *swap_int - swap values of 2 integers
  *@a: integer 1
  *@b: integer 2
  *
  *Return: nothing
  */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
