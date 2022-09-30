#include <stdio.h>

/**
  * main - Entry point
  * @argc: Argument count
  * @argv: Argument vector
  * Return: Always 0 success
 */
int main(int argc, char *argv[])
{
	int count;

	printf("mynameis \"%s\".\n", argv[0]);
	printf("mynewnameis \"%s\".\n", argv[0]);
	for (count = 0; count < argc; count++)
	{
		printf("argv[%d] = %s\n", count, argv[count]);
	}
	return (0);
}
