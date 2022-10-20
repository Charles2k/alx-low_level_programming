#include "main.h"

/**
  *print_diagonal - print diagonal line
  *
  *@n: line count
  *description : print diagonal line with char \
  *
  *Return: Always 0 (Success)
  */
void print_diagonal(int n)
{
	int l, s;

	if (n <= 0)
		_putchar('\n);

	for (l = 0; l < n; l++)
	{
		for (s = 0; s < l; s++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
}
