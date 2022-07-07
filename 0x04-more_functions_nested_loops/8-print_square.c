#include "main.h"
#include <stdio.h>

/**
 * print_square - print square line
 * @n: number of lines using '#'
 * Return: void
 */
void print_square(int n)
{
	int i;
	int j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
