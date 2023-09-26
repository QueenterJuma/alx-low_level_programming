#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - Search for a string of any set of bytes.
 * @s: type char pointer
 * @accept: type char pointer
 * Return: s or null if no such byte type is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int k, m;
	char *p;

	k = 0;
	while (s[k] != '\0')
	{
		m = 0;
		while (accept[m] != '\0')
		{
			if (accept[m] == s[k])
			{
				p = &s[k];
				return (p);
			}
			m++;
		}
		k++;
	}
	return (NULL);
}
