#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * write function that swaps the values of two intgers
 * Return : always 0.
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
