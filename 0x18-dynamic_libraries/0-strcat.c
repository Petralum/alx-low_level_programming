#include "main.h"

/**
 * *_strcat - appends strings
 * @dest: first string
 * @src: second string
 * Return: Returns pointer to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;

	for (index = 0; src[index]; index++)
	dest[dest_len++] = src[index];

	return (dest);
}
