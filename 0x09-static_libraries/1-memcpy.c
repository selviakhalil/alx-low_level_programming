#include "main.h"
/**
 * _memcpy - function copies memory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * @n:number of byted
 * Return: copied memory with n byte
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j;
	int i = n;

	for (j = 0; j < i ; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
