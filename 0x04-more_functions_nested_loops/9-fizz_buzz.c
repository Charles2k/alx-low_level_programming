#include <stdio.h>

/**
 *main - entry point
 *
 *description - print fizz  for multiples of 3
 *buzz for multiples of 5 and fizz buzz for multiles
 *of both
 *
 *Return - Always 0
 */
int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((i % 3) && (i % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			printf("%d", i);
		}
	putchar(' ');
	}
	printf("\n");
}
