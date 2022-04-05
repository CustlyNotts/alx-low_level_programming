#include "main.h"
#include <stdlib>
/**
 * create_array - the function o
 * @size: the size of array to be created
 * @c: the initialized char
 * Return: NULL (failed) or 0 (Success)
 */
char *create_array(unsigned int size, size c)
{
	char *arr[];

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);
	return (arr);
}
