#include "main.h"
/**
 * _memset - fills memory with a const byte
 * @s: first whatever
 * @b: second whatever
 * @n: third whatever
 *
 * Return: a pointer again
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++; n--)
	{
		s[i] = b;
	}
	return (s);
}
