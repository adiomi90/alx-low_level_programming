/**
 * linear_search - Searches for a value in an array of integers
 * @array: A pointer to the first element of the array to search
 * @size: Number of elements in @array
 * @value: Value to search for
 * Return: Index at which the value is found, or -1 if not found
 */
int linear_search(int *array, int size, int value)
{
    // Check if the array is NULL
    if (!array)
        return -1;

    // Iterate through the array elements
    for (int i = 0; i < size; i++)
    {
        // Print the current value being checked
        printf("Value checked array[%d] = [%d]\n", i, array[i]);

        // Check if the current element is equal to the search value
        if (array[i] == value)
            return i; // Return the index if the value is found
    }

    // Return -1 if the value is not found in the array
    return -1;
}
