#include <stdio.h>
/**
 * main - Entry point
 * Description - print alphabet and skip q and e
 * Return: 0 (sucess)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');
	return (0);
}
