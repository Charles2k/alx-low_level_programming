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
	int a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a > 9)
			{
				_putchar((a / 10) + '0');
			}
				_putchar((a % 10) + '0');
		}
	_putchar('\n');
	}
}
