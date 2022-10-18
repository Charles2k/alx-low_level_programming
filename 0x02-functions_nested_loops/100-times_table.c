#include "main.h"

/**
 * print_times_table - prints the times table
 *@: number for multiplication
 */
void print_times_table(int n);
{
	int num, x, prod;

	for (num = 0; num >= 0; num++)
	{
		_putchar('0');

		for (x = 0; x >= 0; x++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * x;

			if (num > 15 || num < 0)
				_putchar(' ');
				else
					_putchar(prod);
		}
		_putchar('\n');
	}
}
