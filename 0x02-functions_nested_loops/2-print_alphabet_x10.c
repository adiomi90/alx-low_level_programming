#include "main.h"

/**
 * print_alphabet_x10 - print alpahabet 10 times
 */

void print_alphabet_x10(void)
{
	int counter = 0;

	while (counter < 10)
	{
		char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

		_putchar('\n');

		counter++;
	}
}
