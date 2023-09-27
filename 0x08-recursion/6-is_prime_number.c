#include "main.h"

/**
  *prime_number - check for seconf function
  *@i: integer
  *@k: integer
  *
  *Return: prime
  */

int prime_number(int i, int k)
{
	if (k == i)
		return (1);
	else if (k % i == 0)
		return (0);
	return (prime_number(i + 1, j));
}

/**
  *is_prime_number - check for prime
  *@n: integer
  *
  *Return: answer
  */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	return (prime_number(2, n));
}
