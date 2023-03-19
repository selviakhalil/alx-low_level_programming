#include <stdio.h>
/**
 * main - main is first function of every c program
 * Return: always 0
 */
int main(void)
{
	int i;
	char j;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	for (j = 'a' ; j <= 'e' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
