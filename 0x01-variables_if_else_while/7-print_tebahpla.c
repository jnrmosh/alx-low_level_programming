#include <stdio.h>

/**
* main - entry point to program,
*
* Description: print the alphabet lowercase in reverse
*
* Return : 0 (Success)
*/
int main(void)
{
	char tbet;

	for (tbet = 'z'; tbet >= 'a'; tbet--)
	{
		putchar(tbet);
	}
	putchar(tbet);
	return (0);
}
