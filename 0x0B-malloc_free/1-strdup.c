#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
  * _strdup - returns a pointer to a newly allocated space
  * in memory, which contains a copy of the string given
  * as a parameter.
  * @str: string
  *
  * Return: NULL if str is NULL, a pointer to duplicated
  * string, NULL if insufficient memory was available
  */
char *_strdup(char *str)
{
	char *newString;
	int len;

	len = strlen(str);
	newString = malloc(len * sizeof(char));

	if (newString == NULL)
	{
		return (NULL);
	}
	if (str == NULL)
	{
		return (NULL);
	}

	strcpy(newString, str);

	return (newString);
}
