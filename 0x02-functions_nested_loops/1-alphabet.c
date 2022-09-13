#include <main.h>

/**
  * main - Prints alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */
void print_alphabet(void);
int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n')
}
