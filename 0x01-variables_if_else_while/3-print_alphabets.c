#include <stdio.h>
/**
 * main - the entry point
 *
 * Returb: 0 when successful
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <='z'; letter++)
	{
		putchar(letter);
	}
	for (letter = 'A'; letter <= 'Z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	
	return (0);

