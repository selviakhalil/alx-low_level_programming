#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function returns a pointer to a new string which is a duplicate
 * @str: char
 * Return: always 0
 */
char *_strdup(char *str)
{
	char *j;
	int i, n;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		j = malloc(sizeof(char) * (i + 1));
	if (j == NULL)
		return (NULL);
	for (n = 0 ; str[n] ; n++)
		j[n] = str[n];
	return (j);
}
