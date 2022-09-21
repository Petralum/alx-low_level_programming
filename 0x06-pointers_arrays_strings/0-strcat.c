#include "main.h"

/**
 * *_strcat - appends the src string to the dest string
 *
 * Return: A pointer to the resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	char s1[] = "dest";
	char s2[] = "src";
	char *p;

	_putchar("%s\n", s1);
	_putchar("%s\n", s2);
	p = _strcat(s1, s2);
        _putchar("%s\n", s1);
	_putchar("%s\n", s2);
	_putchar("%s\n", p);

	return (p);
}
