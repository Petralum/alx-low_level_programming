#include "main.h"
#include <stdlib.h>

/**
  * malloc_checked - allocate memory for b
  * @b:the size to allocate
  *
  * Return: A void pointer on success or NULL on failure
  */
void *malloc_checked(unsigned int b)
{
	char *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
