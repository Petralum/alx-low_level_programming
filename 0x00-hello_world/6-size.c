#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("Size of char: %lu bytes(s)\n", (unsigned long)sizeof(d));
	printf("Size of an int: %lu bytes(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu bytes(s)\n", (unsigned long)sizeof(f));

	return (0);
}
