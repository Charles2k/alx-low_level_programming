#include <stdio.h>

/**
  *main - Entry for functions putchar() and for
  *
  *Description - This program should print all lowercase alphabets
  *using the putchar() function
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int bh;

	for (bh = 'a'; bh <= 'z'; bh++)
	{
		putchar(bh);
	}
	{
		putchar('\n');
	}

	return (0);
}
