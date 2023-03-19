#include <stdio.h>
/**
 * main - this first and main function of every c program
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
