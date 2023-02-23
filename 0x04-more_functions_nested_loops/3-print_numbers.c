#include <stdio.h>
#include "main.h"

/**
 * print_numbers - entry point
 * Description: print numbers from 0 to 9 followed by new line
 * Return: 0
*/
void print_numbers(void)
{
	for (int i = 0; i <= 9; i++)
	{
		_putchar((i %10) + '0');
	}
	_putchar('\n');

