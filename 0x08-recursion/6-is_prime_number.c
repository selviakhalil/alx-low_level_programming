#include "main.h"
/**
 * is_prime_number - says if an integer prime or not
 * @n: number to evalute
 * Return: 1 if n prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}
/**
 * actual_prime - calculate if a number is prime
 * @n: number to evaluate
 * @i: iterator
 * Return: 1 if prime , otherwise 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (actual_prime(n, i - 1));
}
