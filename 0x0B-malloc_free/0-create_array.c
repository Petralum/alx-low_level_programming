#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - creates an array of characters and
  * initializes it with a specific character.
  * @size: number of characters in array
  * @c: character in the array
  *
  * Return: A pointer to the array or NULL if it fails
  */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	array = malloc(size * sizeof(char));

	if (array == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
}
