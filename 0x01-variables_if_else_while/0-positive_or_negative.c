#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
  *main - Main entry, call if and printf functions
  *Display whether a random number is positive, negative or zero
  *
  *Description - This program will use if statement
  *to display the polarity of a random number
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d ", n);
	if (n > 0)
	{
		printf("is positive\n");
	}
			else if (n < 0)
			{
				printf("is negative\n");
			}
	else
	{
		printf("is zero\n");
	}
	return (0);
}
