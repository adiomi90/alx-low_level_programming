#include "main.h"

/**
 * islower.c - check for a lower case letter
 * Return: 1 for lower | 0 if not
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
