#include <stdio.h>

/**
  *main - Program entry point
  *
  *Description - This program will print 0-9
  *using putchar() function
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	{
		putchar('\n');
	}
	return (0);
}
