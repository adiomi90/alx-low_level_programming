#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create an array of chars
 * @size: The size of the array
 * @c: the specific char
 * Return: 0 when is 0 or fail is null
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int index;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = c;

	return (array);
}
