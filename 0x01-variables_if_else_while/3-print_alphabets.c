#include <stdio.h>
/**
 * main - Print the alphabet*
 * 
 * Returb: 0 when (Successful)
 */
int main(void)
{
	int k = 97;
	int j = 65;

	while (k <= 122)
	{
		putchar(k);
		k++;
	}
	while(j <= 90)
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	
	return(0);
}

	
