#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 on success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
		putchar(ch++);

	ch = 'A';
	while (ch <= 'Z')
		putchar(ch++);

	putchar('\n');

	return (0);
}
