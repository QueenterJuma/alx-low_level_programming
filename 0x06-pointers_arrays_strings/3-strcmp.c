#include "main.h"

/**
 * _strcmp - compares two str
 * @s1: first str
 * @s2: second str
 *
 * Return: 0 or 15 or -15
 */

int _strcmp(char *s1, char *s2)
{
	int b;

	for (b = 0; s1[b] != '\0' && s2[b] != '\0'; b++)
	{
		if (s1[b] != s2[b])
		{
			return (si[b] - s2[b]);
		}
	}
	return (0);
}
