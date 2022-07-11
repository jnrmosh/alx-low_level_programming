#include <stdio.h>

/**
 * print_array - print elements of an array of integers
 * @a: pointer
 * @n: no of elements of array to be printed
 * Return: no return
 */
void print_array(int *a, int n)
{
	short c = 0;

	while (n-- > 0)
	{
		printf("%d", a[c++]);
		if (n != 0)
			printf(", ");
	}

	printf("\n");
}
