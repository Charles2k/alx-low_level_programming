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
	int n = 0;

	while (n < 10)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		a++;
	}
	_putchar('\n');
}
