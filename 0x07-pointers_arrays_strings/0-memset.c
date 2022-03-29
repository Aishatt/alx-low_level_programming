#include <stdio.h>
#include "main.h"
/**
 * _memset - function that prints the first bytes
 * @s:pointer,memory area
 * @b: character variable
 * @n: unisigned int
 *
 * Return: the pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i=0 ; i < n ;i++)
	{
		*[i] = b;
	}
	return(s);
}
