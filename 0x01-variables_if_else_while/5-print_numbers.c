#include <stdio.h>

/**
  *main - program entry point
  *
  *Description - This program should print all single digits from 0-9
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a = 0;

		while (a <= 9)
		{
			printf("%d", a);
			a++;
		}
		{
			putchar('\n');
		}
	return (0);
}
