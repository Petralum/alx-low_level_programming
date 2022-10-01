#include "main.h"

/**
  * _strncat - Concatenates two strings but add inputted bnumber of bytes
  * @dest: string one
  * @src: string two
  * @n: interger parameter to compare index to
  * Return: A pointer to resulting @dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
