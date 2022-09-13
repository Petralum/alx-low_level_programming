#include "main.h"

/**
  * main - Prints alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */
void print_alphabet_x10(void);
{
	int ch;
	int count = 0;

	while (count++ <= 9)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			putchar(ch);
		putchar('\n');
	}
}
