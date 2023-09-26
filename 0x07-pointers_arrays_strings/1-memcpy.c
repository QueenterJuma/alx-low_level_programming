#include "main.h"

/**
  *_memcpy - copy src to dest
  *@dest: destination
  *@src: source
  *@n: integer
  *
  *Return: destination
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	j = 0;
	while (j < n)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
