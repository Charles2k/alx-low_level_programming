#include "main.h"

/**
  *more_numbers - print numbers multiple times
  *
  *description - print the numbers 0-14 10 times
  *
  *Return: Always 0 (Success)
  */
void more_numbers(void)
{
	int i;
	int count = 10;
	unsigned int a;

	for (i = 0; i < count; i++)
	{
		if (a <= 14)
		{
			_putchar('a');
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}
