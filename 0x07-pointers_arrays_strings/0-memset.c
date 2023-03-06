#include "main.h"
/**
* _memset - Entry point
* *@s: parameter s
* *@b: parameter b
* *@n: parameter n
* Return: a char
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
