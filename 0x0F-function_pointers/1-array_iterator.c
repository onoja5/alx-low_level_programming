#include "function_pointers.h"

/**
 * array_iterator - This function executes a function given as a parameter
 * @array: array of integers
 * @size: size of array
 * @action: function pointer
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
