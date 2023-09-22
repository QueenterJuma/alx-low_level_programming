#include "main.h"

/**
  * _strcat - a function that concertinates two strings
  *@dest: destination
  *@src: source
  *
  *Return: final concertinated sting
  */

char *_strcat(char *dest, char *src)
{
	int cat1 = 0;
	int cat2 = 0;

	/* finding the length of string dest */
	while (dest[cat1] != '\0')
	{
		cat1++;
	}
	while (src[cat2] != '\0')
	{
		dest[cat1] = src[cat2];
		/* cat1 will start at the last value of string dest */
		cat1++;
		cat2++;
	}
	dest[cat1] = '\0';
	return (dest);
}

