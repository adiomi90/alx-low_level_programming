#include <stdio.h>
/**
 * print_to_98 - print natural number to 98
 * @n - number to print from 
 * Return: 0 
 */

void print_to_98(int n)
{
	for (int i = n; i < 99; i++)
	{
		printf("%d, ",i);
	}
}
