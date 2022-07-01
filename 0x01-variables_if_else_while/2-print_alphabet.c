#include <stdio.h>

/**
* main - entry point
*
* Description: Prints the alphabet in lowercase
* putchar - writes a single character to the standard output stream
* Return: 0 success
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
