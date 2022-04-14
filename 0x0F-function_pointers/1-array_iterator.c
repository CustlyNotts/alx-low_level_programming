#include "function_pointers.h"
/**
 * array_iterator -  the main guy
 * @array: the array in question
 * @size: totally self explanatory
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
