#include "main.h"

/**
  *_strlen - length of a string
  *@s: string of certain length
  *
  *Return: Always 0
  */

int _strlen(char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;

	return (c);
}
