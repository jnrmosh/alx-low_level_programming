#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 *
 * Return: 0 Always success
 */
int main(void)
{
	print_message();
	return (0);
}

/**
 * print_message - print putchar
 *
 * Return:void
 */
void print_message(void)
{
	int k;
	char message[8] = '_putchar';

	for (k = 0; k <= 8; k++)
	{
		putchar(message[k]);
	}
	putchar('\n');
}
