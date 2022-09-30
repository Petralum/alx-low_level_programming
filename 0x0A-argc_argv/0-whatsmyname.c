#include <stdio.h>

/**
  * main - Entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int count = 0;

	argc = count;

	for (count = 0; count < argc; count++)
	{
		printf("mynameis \"%s\".\n", argv[count]);
	}
	return (0);
}
