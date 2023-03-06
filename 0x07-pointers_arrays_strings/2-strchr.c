#include "main.h"
/**
* _strchr - function name
* *@s: return memory address
* *@c: character to check
* Return: 0
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')

	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
