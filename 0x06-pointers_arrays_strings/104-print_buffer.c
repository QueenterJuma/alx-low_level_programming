#include <stdio.h>

/**
 * print_buffer - Prints a buffer
 * @b: The character buffer
 * @size: The number of bytes to print from the character buffer
 */
void print_buffer(char *b, int size)
{
	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = i; j < i + 10; j += 2)
		{
			if (j < size)
				printf("%02x", *(b + j));
			else
				printf("%2c", ' ');
			if (j + 1 < size)
				printf("%02x", *(b + j + 1));
			else
				printf("%2c", ' ');
			putchar(' ');
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				putchar(*(b + j) < ' ' ? '.' : *(b + j));
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
