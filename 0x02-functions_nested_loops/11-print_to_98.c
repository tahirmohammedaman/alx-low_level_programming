#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints integers from start input to 98
 * @n: start integer
 */
void print_to_98(int n)
{
	if (n < 98)
		while (n < 98)
			printf("%d, ", n++);
	else if (n > 98)
		while (n > 98)
			printf("%d, ", n--);

	printf("98\n");
}
