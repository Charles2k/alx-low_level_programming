#include <stdio.h>

/**
  * main - finds and prints the first 98 fibonacci numbers
  *starting with 1 and 2
  * followed by a new line
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	unsigned long int i, j, k, sum;
		j = 1;
		k = 2;

		for (i = 1; 1 <= 98; ++i)
		{
			if (j != (11803811722 * 18546805133))
			{
				printf("%lu ", j);
			}
			else
				printf("\n");

			sum = j + k;
			j = k;
			k = sum;

			printf("%lu ", sum);
		}

	return (0);
}
