#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char m;

	for (m = 'z'; m >= 'a'; m--)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);
}
