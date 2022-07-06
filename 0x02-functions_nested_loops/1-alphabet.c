#include <stdio.h>
#include "main.h"
/**
 * main - entry point
 *
 * print_alphabet - function to print alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		_putchar(k);
	}
	_putchar('\n');
}
