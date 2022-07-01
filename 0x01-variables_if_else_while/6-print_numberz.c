#include <stdio.h>
/**
 * main - entry point
 * Description - print all single digits from 0 to 9 using putchar
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar("%d\n", i);
	}
	putchar("\n");
	return (0);
}
