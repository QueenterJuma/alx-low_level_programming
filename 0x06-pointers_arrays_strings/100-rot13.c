#include "main.h"
/**
 * rot13 - Encode a string using rot13
 * @s: string
 * Return: string
 */
char *rot13(char *s)
{
	int i, j;

	char capa[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char capb[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; capa[j] != '\0'; j++)
		{
			if (s[i] == capa[j])
			{
				s[i] = capb[j];
				break;
			}
		}
	}
	return (s);
}
