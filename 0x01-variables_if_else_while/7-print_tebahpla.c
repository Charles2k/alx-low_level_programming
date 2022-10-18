#include <stdio.h>

/**
  *main - Program entry point
  *
  *Description - Print the alphabets in reverse order
  *
  *Return: Always 0 (success)
  */
int main(void)
{
	int hc;

	for (hc = 'z'; hc >= 'a'; hc--)
	{
		putchar(hc);
	}
	{
		putchar('\n');
	}
	return (0);
}
