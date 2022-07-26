#include <stdio.h>

/**
 * main - prints name followed by new line
 * @argc: n args
 * @argv: array argument
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
