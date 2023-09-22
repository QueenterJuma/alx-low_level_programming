#include "main.h"

/**
 *  _strncat - concertinates two strings
 *  @dest: destination
 *  @src: source
 *  @n: integer
 *  Return: final concertinated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int cat1 = 0;
	int cat2;

	/* finding the length of str dest */
	while (dest[cat1] != '\0')
	{
		cat1++;
	}
	for (cat2 = 0; cat2 < n; cat2++)
	{
		if (src[cat2] == '\0')
			break;
		dest[cat1] = src[cat2];
		/* count1 will start at the last value of string dest */
		cat1++;
	}
	return (dest);
}
