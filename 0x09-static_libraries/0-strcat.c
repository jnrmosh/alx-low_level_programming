#include "main.h"

/**
 * _strcat - function to commute strings
 * @dest: parameter pointer to a character
 * @src: parameter pointer to a character
 * Return: value of destination
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
