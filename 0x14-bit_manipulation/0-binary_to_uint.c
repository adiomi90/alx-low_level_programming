#include "main.h"
/**
 * binary_to_unit - converts a binary number to unsigned int
 * @b: string to be checked
 * Return: return converted number or 0 if it fails
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0;
	int len;

	if (b == NULL)
	{
		return (0);
	}

	for (len = 0; b[len]; len++)
	{
		if(b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
	}

	len -= 1;

	for (i = 0; b[i]; i++)
	{
		if (b[i] == '1')
		{
			num += (1 * (1 << len));
		}
		len--;
	}

	return (num);

}
