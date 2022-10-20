#include "main.h"

/**
  *print_most_numbers - prints only allowed numbers
  *
  *description - prints all numbers except 2 amd 4
  *
  *Return: Always 0 (Success)
  */
void print_most_numbers(void)
{
	int n;

	for (n >= 0; n <= 9; n++)
	{
		if (n != 2 || n != 4)
		{
			_putchar('n');
			_putchar('\n');
		}
	}
	return (0);
}
