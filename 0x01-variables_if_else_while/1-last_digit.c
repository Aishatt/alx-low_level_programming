#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/** 
 * main - prints the last digit of the random
 * number stored in variable n
 * Return: always 0 (success)
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ",n ,n % 2);
	if (n % 2 > 5)
	printf("and is greater than 5\n");
	else if(n % 2 == 0)
	printf("and is 0\n");
	else (n % 2 < 6 && n % 2 != 0)
	printf("and is less than 6 and not 0\n");
	return (0);
}
