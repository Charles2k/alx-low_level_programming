#include <stdio.h>
#define LARGEST 10000000000
/**
  *main - finds and prints the first 98 fibonacci numbers
  *starting with 1 and 2 followed by a new line
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	unsigned long int a = 0, j = 0, b = 0, k = 1;
	unsigned long int d, r, x, sum;
	int i;

		for (i = 1; i <= 98; ++i)
		{
			sum = j + k;
			if (sum > LARGEST || b > 0 || a > 0)
			{
				d = (sum / LARGEST);
				r = (sum % LARGEST);
				x = a + b + d;
				a = b, b = x;
				j = k, k = r;
				printf("%lu%010lu", b, k);
			}
			else
			{
				sum = j + k;
				j = k;
				k = sum;
			printf("%lu", sum);
			}
			if (i != 98)
			{
				printf(", ");
			}
		}
			printf("\n");

	return (0);
}
