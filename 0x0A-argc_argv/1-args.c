#include <stdio.h>
#include "main.h"
/**
 * main - main function of every c
 * @argc: number of arguments
 * @argv: array of arrguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
