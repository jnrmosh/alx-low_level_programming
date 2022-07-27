#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * when renamed it prints new name without having to compile again
 *
 * argc: offset count
 * argv: offset value
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}
