#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;
	int j = 65;

	for (i = 97; i < 123; i++)
		putchar(i);
	for (j = 65; j < 91; j++)
		putchar(j);
	putchar(10);
	return (0);
}
