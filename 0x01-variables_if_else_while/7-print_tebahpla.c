#include <stdio.h>

/**
* main - prints lowercase alphabet in reverse,
* followed by new line
*
* Return : 0 (Success)
*/
int main(void)
{
	char tbet;

	for (tbet = 'z'; tbet > 'a'; tbet--)
	{
		putchar(tbet);
	}
	putchar(tbet);
	return (0);
}
