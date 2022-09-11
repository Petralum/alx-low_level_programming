#include <stdio.h>

/**
  * main - Print alphabet in lowercase
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
		putchar(a);

	putchar('\n');

	return (0);
}
