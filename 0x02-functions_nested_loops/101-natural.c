#include <stdio.h>
/**
 * main - compute the sum o all multiples of 3 and 5
 * Return: 0
 */

int main(void)
{
	int i, sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum +=i;
	}

	printf("%\n",sum);
	
	return (0);
}
