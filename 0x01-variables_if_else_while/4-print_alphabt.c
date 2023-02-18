#include <stdio.h>
/**
 * main - print alphabet except q and e 
 * Return : 0
 */
int main()
{

	char letter;
	for(letter = 'a'; letter <= 'z'; letter++)
	{
		if(letter != 'q' && letter != 'e')
			putchar(letter);
	}
	
	putchar('\n');
	
	return (0);
}
