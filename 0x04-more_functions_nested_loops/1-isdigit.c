#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check if parameter is a digit
 * @c: integer representing an ascii character
 * Return: Return 1 if digit or 0 if not a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
