#include <stdio.h>

/**
  *main - Entry point for the functions putchar and for
  *
  *Description - This program should print the alphabet
  *in lowercase and then in uppercase
  *using the putchar() function
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int ch;
	int CH;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (CH = 'A'; CH <= 'Z'; CH++)
	{
		putchar(CH);
	}
	{
		putchar('\n');
	}
	return (0);
}
