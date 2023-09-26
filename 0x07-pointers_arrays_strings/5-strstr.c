#include "main.h"
#include <stdio.h>

/**
 * _strstr - Locates a substring.
 * @haystack: type char str
 * @needle: type char sub str
 * Return: haystack or NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *ack = haystack;
		char *dle = needle;

		while (*dle == *haystack && *dle != '\0' && *haystack != '\0')
		{
			haystack++;
			dle++;
		}
		if (*dle == '\0')
			return (ack);
		haystack = ack + 1;
	}
	return (NULL);
}
