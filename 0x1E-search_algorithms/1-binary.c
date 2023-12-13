#include "search_algos.h"

/**
 * print_arr - helper func to print array everytime array is halved
 * @array: array
 * @l: left index of original array
 * @r: right index of original array
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i != right)
			printf("%d, ", array[i]);
		else
			printf("%d\n", array[i]);
	}
}

/**
 * binary_search - search mids
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t middle = 0;
	size_t left = 0;
	size_t right = size - 1;

	if (!array)
		return (-1);

	while (left <= right)
	{
		print_array(array, left, right);
		middle = (left + right) / 2;
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
