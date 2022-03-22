#include "main.h"
#include <stdio.h>
/**
 * print_rev - prints in reverse
 * @s: the first argument
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
	j = ln - 4;
	while (j >= 0)
	{
		_putchar(s[j]);
		j--;
	}
	_putchar('\n');
}
