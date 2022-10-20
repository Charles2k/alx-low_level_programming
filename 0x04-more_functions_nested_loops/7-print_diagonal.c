#include "main.h"

/**
  *print_diagonal - print diagonal line
  *
  *@n: line count
  *description : print diagonal line with char \
  *
  *Return: Always 0 (Success)
  */
int print_diagonal(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
			_putchar('_')
	}
		_putchar('\n');
}
