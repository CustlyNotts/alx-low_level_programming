#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;
	int j = 44;
	int k = 32;

	for (i = 48; i < 58; i++)
		putchar(i);
		for (j = 44; j < 45; j++)
			putchar(j);
			for (k = 32; k < 33; k++)
				putchar(k);
	putchar(10);
	return (0);
}
