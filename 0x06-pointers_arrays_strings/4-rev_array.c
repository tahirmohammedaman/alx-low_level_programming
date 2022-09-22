#include "main.h"

/**
 * reverse_array - reverses elements of an array
 * @a: input array
 * @n: number of elements of the array
 */
void reverse_array(int *a, int n)
{
	int i;

	n--;
	for (i = 0; i < n / 2; i++)
	{
		int temp;

		temp = a[i];
		a[i] = a[n - i];
		a[n - i] = temp;
	}
}
