#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers between 0 and 9 
 *
 * Return: void
 */
void print_most_numbers(void)
{
	int k;

	for (k = 0; k < 10; k++)
	{
		if (k != 2 && k != 4 )
		{
			_putchar(k + '0');
		}
	}
	_putchar('\n');
}
