#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Return: 0 Always success
 */
int main(void)
{
	message();
	return (0);
}

/**
 * message - print putchar
 * Return:void
 */
void message(void)
{
	unsigned int k;
	char msg[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	for (k = 0; k <sizeof(msg); k++)
	{
		_putchar(msg[k]);
	}
 	_putchar('\n');
}
