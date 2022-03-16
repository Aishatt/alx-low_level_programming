#include "main.h"

/**
 *main - check the code
 *print_alphabet - prints alphabets in lowercase, followed by a new line  
 *Return: Always 0(success).
 */
int main(void)
{
	char ch;
	ch = 'a';
	while(ch <='z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar ('/n');
}

