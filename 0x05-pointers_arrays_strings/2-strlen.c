#include "main.h"
#include <string.h>
/**
 * _strlen - gets length
 * @s: the argument
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\n')
	{
		i++;
		j++;
	}
	return (j);
}
