#include "main.h"
#include <stdio.h>
/**
 * positive_or_negative - function to check positive or negative number
 * @i: number to be printed
 * Return: always 0
 */
void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative", i);
	else if (i > 0)
		printf("%d is positive", i);
	else
		printf("%d is zero", i);
	printf("\n");
}
