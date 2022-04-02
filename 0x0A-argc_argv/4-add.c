#include <stdio.h>
#include <stdlib.h>

/**
 * main- adds positive integers
 * @argc: number of command line arguemnets
 * @argv: array containing command line arguemnets
 * Return 0 - success.
 */
int main(int argc , char * argv[])
{
	int i, j, sum=0;
	if(argc > 1)
	{
		for(i=1; i <argc;i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if(!isdigit(argv[i][j]))
				{
				printf("Error\n");
				return 1;
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return 0;
}
