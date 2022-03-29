#include <stdio.h>
#include "main.h"
/**
 * _memset - function that prints the first bytes
 * @s:pointer,memory area
 * @b: character variable
 * @n: unisigned int
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i=0 ; i < n ;i++)
	{
		*(s + i)= b;
	}
	return(s);
}
