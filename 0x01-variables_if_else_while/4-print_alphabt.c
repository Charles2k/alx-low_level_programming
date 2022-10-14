#include <stdio.h>

/**
  *main - Entry for functions putchar() and for
  *
  *Description - This program should print alll alphabets except q and e
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int _ch;

	for (_ch = 'a'; _ch <= 'z'; _ch++)
	{
		if (_ch == 'e' || _ch == 'q')
		{
			_ch =_ch + 1;
			continue;
		}
		putchar(_ch);
	}
	{
		putchar('\n');
	}
	return (0);
}
