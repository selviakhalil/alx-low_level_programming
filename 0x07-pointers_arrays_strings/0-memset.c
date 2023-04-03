#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: starting address of memory to be filed
 * @b: the desired value
 * @n: number of bytes
 * Return: changed array
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
