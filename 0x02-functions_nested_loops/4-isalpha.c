#include "main.h"

/**
 * _isalpha - check if its is letter, lowercase or uppercase
 * @c: letter to be checked
 * Return: 1 for true , 0 for false
 */

int _isalpha(int c)
{
	for ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
