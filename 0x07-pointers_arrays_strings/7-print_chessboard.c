#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - Funtion that prints the chessboard.
 * @a:type char str
 * Return: Always 0.
 */
void print_chessboard(char (*a)[8])
{
	int k, m;

	k = 0;
	while (k < 8)
	{
		m = 0;
		while (m < 8)
		{
			_putchar(a[k][y]);
			m++;
		}
		_putchar('\n');
		k++;
	}
}
