#include "main.h"
/**
 * *_memcpy - copiesy with a const byte
 * @dest: memory
 * @src: source
 * @n: length of src
 *
 * Return: a pointer again
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
