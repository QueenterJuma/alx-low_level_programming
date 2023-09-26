#include "main.h"

/**
  *_strpbrk - searches a string
  *@s: s
  *@accept: accept
  *Return: a string
  */

char *_strpbrk(char *s, char *accept)
{
	int k, m;

	for (k = 0; s[k] != '\0'; k++)
	{
		for (m = 0; accept[m] != '\0'; m++)
		{
			if (s[k] == accept[m])
			{
				return (s + k);
			}
		}
	}
	return (0);
}
