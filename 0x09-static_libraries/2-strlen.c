#include "main.h"

/**
 * _strlen - legth of a string
 * @s: input character
 * Return: length of a string
 */

int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
