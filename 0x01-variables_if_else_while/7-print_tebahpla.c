#include <stdio.h>

/**
* main - print lowercase alphabet in reverse
* followed by a new line
* return (0) - Success
*/
int main(void)
{
	char tbet;

	for (tbet = 'z'; tbet > 'a'; tbet--)
	{
		putchar(tbet);
	}
	putchar('\n');
	return (0);
}
