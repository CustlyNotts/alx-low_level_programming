#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 97;

	for (i = 97; i < 123; i++)
		if (i == 101 || i == 113)
			continue;
	        else
		putchar(i);
	putchar(10);
	return (0);
}
