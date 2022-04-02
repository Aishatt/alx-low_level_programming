#include <stdio.h>
/**
 * main - prints all arguements it receives
 * @argc: number of command line arguements
 * @argv: array that contains the command line arguements
 * Return: 0 - success.
 */
int main(int argc , char* argv[])
{
	int i;

	for(i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return 0;
}
