#include <stdio.h>

/**
* main - prints the alphabet in lowercase followed by new line
*
* putchar - writes a single character to the standard output stream
* return: 0 success
*/
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
	/* putchar - prints the alphabet in lowercase */
		putchar(alphabet);
	}
	/* prints new line */
	putchar('\n');
	return (0);
}
