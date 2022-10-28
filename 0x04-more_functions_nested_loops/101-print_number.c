#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: int type number
 * Description: Can only use _putchar to print.
 */
void print_number(int n)
{
	unsigned int num; /* convert int to long */

	if (num < 0)
	{
		num *= -1;
		_putchar('-');
	}
	while (num >= 0)
	{
			_putchar(num % 10 + '0');
	}
}
