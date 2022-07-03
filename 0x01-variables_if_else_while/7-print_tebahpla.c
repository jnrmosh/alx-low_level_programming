#include <stdio.h>

/**
* main - Entry Point
*
* Return: Always 0
*/
int main(void)
{
	char tbet;

	for (tbet = 'z'; tbet >= 'a'; tbet--)
	{
		putchar(tbet);
	}
	putchar('\n');
	return (0);
}
