#include "main.h"

/**
 *print_numbers - prints numbers
 *
 *description - prints numbers 0-9 and
 *a new line
 *
 *Return: Always 0 (Success)
 */
void print_numbers(void)
{
	int a = 0;

	while (a < 10)
		_putchar(a++ + '0');
	_putchar('\n');
}
