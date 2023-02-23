#include <stdio.h>
#include "main.h"

/**
 * print_number - start of the function
 * Return: 0
 */
void print_numbers(void)
{
	int i;
	i = 1;
	while ( i < 10)
	{
		_putchar(i);
		i++;

	}
	_putchar('\n');
}
