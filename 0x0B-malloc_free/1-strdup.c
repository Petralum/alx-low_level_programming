#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * _strdup - creates duplicate of string
  * @str: string to be duplicated
  *
  * Return: A pointer to duplicated string or NULL
  */
char *_strdup(char *str)
{
	char *strnew = NULL;
	unsigned int i;
	int n;

	if (str == NULL)
		return (NULL);
	for (n = 0; str[n] != '\0'; n++)
		;

	strnew = (char *)malloc(n + 1 * sizeof(char));
	if (strnew != NULL)
	{
		for (i = 0; str[i] != '\0'; i++)
			strnew[i] = str[i];
	}
	else
	{

		return (NULL);
	}
	strnew[i] = '\0';
	return (strnew);
}
