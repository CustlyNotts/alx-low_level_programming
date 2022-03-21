#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: the first argument
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	char k, q[];
	int i;

	k = s;
	for (i = -1; i < 0; i--)
	{
		if (k[i] != NULL)
		{
			q[i - i] = k[i];
		}
	}
	puts(q);
}
