#include "main.h"
#include <stdlib.h>
/**
 * create_array - the function o
 * @size: the size of array to be created
 * @c: the initialized char
 * Return: NULL (failed) or 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
		return (NULL);
	arr = malloc(sizeof(char) * size);
	arr[0] = c;
	if (arr == NULL)
		return (NULL);
	return (arr);
}
