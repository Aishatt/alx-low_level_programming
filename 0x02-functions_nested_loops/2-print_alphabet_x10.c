#include "main.h"

/**
* print _alphabet_x10 - print 10 times alphabet in lower case
* followed by a new line
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int i;
	
	while(i < 10)
	{
	alphabet = 'a';
	while(alphabet <= 'z')
	{ 
		_putchar(alphabet);
		alphabet++;
	}
	_putchar('\n');
	i++;
	}
}
