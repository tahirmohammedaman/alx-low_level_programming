#include <stdio.h>
#include "main.h"

/**
 * print_array - prints specified number of elements from an array
 * @a: input array
 * @n: number of elements printed
 */
void print_array(int *a, int n)
{
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);

		if (i < n - 1)
			printf(", ");
		else
			printf("\n");
	}
}

