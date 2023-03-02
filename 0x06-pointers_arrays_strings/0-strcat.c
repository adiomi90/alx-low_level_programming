#include "main.h"

/**
 * strcat - concatenate4s the string given 
 * @dest: A pointer to the string 
 * @src: The source string 
 * Return: return dest
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while(dest[index++])
	{
		dest_len++;
	}

	for(indexi = 0; src[index]; index++)
	{
		dest[dest_len++] = src[index];
	}
	return (dest);

}
