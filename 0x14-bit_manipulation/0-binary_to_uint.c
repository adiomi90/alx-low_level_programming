#include <string.h>

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0, mult = 1;
	int len, i;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

	}
	
	len -= 1;


	for (i = 0; b[len]; i++)
	{

		num += (b[len] - '0') * mult;
		mult *= 2;
	}

	return (num);
}
