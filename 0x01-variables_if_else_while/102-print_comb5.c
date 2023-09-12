#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k1, k2;

	for (k1 = 0; k1 <= 99; k1++)
	{
		for (k2 = 0; k2 <= 99; k2++)
		{
			if (k1 < k2 && K1 != k2)
			{
				putchar((k1 / 10) + '0');
				putchar((k1 % 10) + '0');
				putchar(' ');
				putchar((k2 / 10) + '0');
				putchar((k2 % 10) + '0');
				if (k1 != 98 || k2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
