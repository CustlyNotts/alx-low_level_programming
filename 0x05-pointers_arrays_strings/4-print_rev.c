#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: the first argument
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int ln = 0;
	int i = 0;
	int j;

	while (s[i] != '\n')
	{
		ln++;
		i++;
	}
	for (j = (ln - 1); j >= 0; j++)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
