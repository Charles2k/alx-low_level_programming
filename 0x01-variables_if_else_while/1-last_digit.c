#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Entry for functions printf and if
  *
  *Description - This program print the last digit of a random number shows
  *whether it's greater than 5 ,less than 6 and not 0 or equal to 0
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
		/* your code goes there */
	d = n % 10;
	printf("Last digit of %d is ", n);
	if (d > 5)
	{
		printf("%d and is greater than 5\n", d);
	}
	else if (d < 6 && d != 0)
	{
		printf("%d and is less than 6 and not 0\n", d);
	}
		else
		{
			printf("%d and is 0\n", d);
		}
	return (0);
}
