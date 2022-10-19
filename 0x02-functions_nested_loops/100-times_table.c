#include "main.h"

/**
  *print_times_table - prints the n times table,starting with zero
  *@n: number 0f the times table
  */
void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
	{
		return;
	}
		while (i <= n)
		{
			for (j = 0; j <= n; j++)
			{
				k = i * j;
				if (k >= 100)
					{
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
					}
				else if (k >= 10)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else if (k > 0 && k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else
				{
					_putchar(k + '0');
				}
				if (j < n)
				_putchar(',');
				_putchar(' ');
			}
			_putchar('\n');
			i++;
		}
}
