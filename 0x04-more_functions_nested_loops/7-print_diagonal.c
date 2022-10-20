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
	int count = n;
	char a = 92;

	for (n >= 0; n <= count; n++)
	{
		if (n == 1)
		{
			_putchar('a');
			_putchar('\\n;
		}
		else if (n > 1)
		{
			_putchar(' ');
			_putchar('a');
			_putchar('\\n');
		}
		else if (n <= 0)
		{
			_putchar('\\n');
		}
		_putchar('\n');
	}
	return (0);
}
